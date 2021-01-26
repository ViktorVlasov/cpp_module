/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 22:34:24 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/26 23:18:34 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(), NinjaTrap(), FragTrap()
{
    this->ep = 120;
	this->max_ep = 120;
    this->name = "DefaultSuperTrap";
    this->mellee_attack_damage = 60;
    std::cout << this->name << ": I am SuperTrap" << std::endl;
}

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
    this->ep = 120;
	this->max_ep = 120;
    this->mellee_attack_damage = 60;
    std::cout << this->name << ": I am SuperTrap" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "SuperTrap <" << this->name << "> was killed!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& superTrap)
{
    std::cout << superTrap.getName()  << ": Let's get this suuuper party started!" << std::endl;
    *this = superTrap;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &superTrap)
{
    ClapTrap::operator=(superTrap);
	return (*this);
}