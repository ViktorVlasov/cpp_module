/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 12:27:21 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/29 23:29:25 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : name(name)
{
    std::cout << "Some random victim called " << name << " just appeared!\n";
}

Victim::Victim(const Victim &victim) : name(victim.name)
{
    std::cout << "Some random victim called " << name << " just appeared!\n";
}

Victim::~Victim()
{
    std::cout << "Victim " << name << " just died for no apparent reason!\n";
}

Victim &Victim::operator=(const Victim &victim)
{
    this->name = victim.name;
    return (*this);
}

const std::string &Victim::getName() const { return this->name; }

std::ostream& operator<< (std::ostream &out, const Victim &victim)
{
	out << "I am " << victim.getName() << " and I like otters!\n";
    return (out);
}

void Victim::getPolymorphed() const
{
    std::cout << name << " has been turned into a cute little sheep!\n"; 
}