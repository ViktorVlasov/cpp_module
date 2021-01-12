/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 14:22:13 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/12 18:04:54 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name,const Weapon &weapon) 
                : name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
    std::cout << name + " attacks with his " + weapon.getType() << std::endl;
}