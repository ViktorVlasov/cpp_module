/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 14:22:17 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/12 18:28:57 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
    name = "Default";
}

HumanB::HumanB(const std::string &name)
{
    this->name = name;
}

HumanB::HumanB(const std::string &name,const Weapon &weapon)
{
    this->name = name;
    this->weapon = &weapon;
}

HumanB::~HumanB()
{
    
}

void HumanB::setWeapon(const Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack(void)
{
    std::cout << name + " attacks with his " + weapon->getType() << std::endl;
}