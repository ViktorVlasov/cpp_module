/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:43:34 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/29 21:26:42 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"


Cast::Cast(const std::string &str)
{
    parser(str);
}

std::ostream &operator<<(std::ostream &os, const Cast &cast)
{
    if (cast.get_impossible() == true)
    {
        os << "char: impossible" << std::endl;
        os << "int: impossible" << std::endl;
    }
    else
    {
        if (cast.get_type_char() == true)
            os << "char: '" << cast.get_char() << "'" << std::endl; 
        else 
            os << "char: non Displayable" << std::endl;
        os << "int: " << cast.get_int() << std::endl;
    }
    
    if (cast.get_imp_float() == true)
    {
        os << "float: impossible" << std::endl;
        os << "double: impossible" << std::endl;
    }
    else
    {
        if (cast.get_float() - cast.get_int() == 0)
        {
            os << "float: " << cast.get_float() << ".0f" << std::endl;
            os << "double: " << cast.get_double() << ".0" << std::endl;
        }
        else
        {
            os << "float: " << cast.get_float() << "f" << std::endl;
            os << "double: " << cast.get_double() << std::endl;
        }
    }
    return (os);
}

void Cast::check_possible(const std::string &str)
{
	if (this->double_vl > std::numeric_limits<int>::max() || 
            this->double_vl < std::numeric_limits<int>::min())
        this->impossible_int = true;
    if (str == "nan" || str == "nanf" ||
        str == "-inff" || str == "+inff" ||
        str == "-inf" || str == "+inf")
        this->impossible_int = true;
}

int Cast::check_char(const std::string &str)
{
    if (str.length() != 1)
        return (1);
    if (std::isdigit(str[0]))
        return (1);
    this->char_vl = str[0];
    this->int_vl = static_cast<int>(this->char_vl);
    this->float_vl = static_cast<float>(this->char_vl);
    this->double_vl = static_cast<double>(this->char_vl);
    return (0);
}

int Cast::check_str(const std::string &str)
{
    if (str.length() > 1 && !std::isdigit(str[0]) && !std::isdigit(str[1]))
    {
        this->impossible_double = true;
        this->impossible_int = true;
        return (0);
    }
    return (1);
}

//test ./ex00 5555

void Cast::parser(const std::string &str)
{
    if (check_char(str) && check_str(str))
    {
        this->double_vl = atof(str.c_str());
        this->float_vl = static_cast<float>(this->double_vl);
        check_possible(str);
        if (this->impossible_int)
            return ;
        else
        {
            this->impossible_int = false;
            this->int_vl = static_cast<int>(this->float_vl);
            if (this->int_vl < MAX_ASCII && 
                std::isprint(this->int_vl) && 
                (this->float_vl - this->int_vl == 0))
            {
                this->char_vl = static_cast<char>(this->int_vl);
                this->type_char = true;
            }
            else
                this->type_char = false;
        }
    }
}

double Cast::get_double() const { return this->double_vl; }
char Cast::get_char() const { return this->char_vl; }
int Cast::get_int() const { return this->int_vl; }
float Cast::get_float() const { return this->float_vl; }
bool Cast::get_type_char() const { return this->char_vl; }
bool Cast::get_impossible() const { return this->impossible_int; }
bool Cast::get_imp_float() const { return this->impossible_double; }
