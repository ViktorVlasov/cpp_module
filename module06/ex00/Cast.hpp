/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 12:08:07 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/29 16:53:30 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
# define CAST_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>
# include <limits>

# define MAX_ASCII 1000

class Cast {
private:
    Cast();
    std::string str;
    double double_vl;
	char char_vl;
	int int_vl;
	float float_vl;
    bool type_char;
    bool impossible_int;
    bool impossible_double;
    void check_possible(const std::string &str);
    void parser(const std::string &str);
    int check_str(const std::string &str);
    int check_char(const std::string &str);
public:
    Cast(const std::string &str);

    double get_double() const;
    char get_char() const;
    int get_int() const;
    float get_float() const;
    bool get_type_char() const;
    bool get_impossible() const;
    bool get_imp_float() const;
};

std::ostream &operator<<(std::ostream &os, const Cast &cast);

#endif