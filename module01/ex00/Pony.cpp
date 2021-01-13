/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 21:13:02 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/13 11:37:27 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, std::string sound) 
			: name(name), color(color), sound(sound)
{
}

Pony::~Pony()
{
	std::cout << "destructor freed memory" << std::endl;
}

std::string Pony::getName()
{
	return (name);
}

std::string Pony::getColor()
{
	return (color);    
}

void Pony::makeSound()
{
	std::cout << sound << std::endl;
}