/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 12:27:12 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/29 23:35:48 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog.\n";
}

Peon::Peon(const Peon &peon) : Victim(peon.name)
{
	std::cout << "Zog zog.\n";
}

Peon::~Peon()
{
    std::cout << "Bleuark...\n";
}

Peon &Peon::operator=(Peon const &peon)
{
	this->name = peon.name;
	return (*this);
}

void Peon::getPolymorphed(void) const
{
	std::cout << name << " has been turned into a pink pony!\n";
}