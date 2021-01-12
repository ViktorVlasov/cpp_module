/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 21:13:00 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/09 22:25:52 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
private:
    std::string name;
    std::string color;
    std::string sound;
public:
    Pony(std::string name, std::string color, std::string sound);
    ~Pony();
    std::string getName();
    std::string getColor();
    void makeSound();
};

#endif