/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 12:27:17 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/29 23:35:07 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
    std::cout << name << ", " << title << ", is born!\n";  
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer) : name(sorcerer.name), title(sorcerer.title)
{
    std::cout << name << ", " << title << ", is born!\n";  
}

Sorcerer::~Sorcerer()
{
    std::cout << name << ", " << title << ", is dead. Consequences will never be the same!\n";
}

Sorcerer &Sorcerer::operator=(const Sorcerer &sorcerer)
{
	this->name = sorcerer.name;
	this->title = sorcerer.title;
	return (*this);
}

const std::string &Sorcerer::getName(void) const { return (this->name); }
const std::string &Sorcerer::getTitle(void) const { return (this->title); }

std::ostream& operator<< (std::ostream &out, const Sorcerer &sorcerer)
{
	out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!\n";
    return (out);
}

void Sorcerer::polymorph(const Victim &victim) const
{
    victim.getPolymorphed();
}
