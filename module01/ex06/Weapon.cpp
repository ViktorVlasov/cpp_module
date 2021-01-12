/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 14:22:23 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/12 17:59:31 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    type = "Default";
}

Weapon::Weapon(const std::string &type) : type(type)
{
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType(void) const
{
    return (type);
}

void Weapon::setType(const std::string &type)
{
    this->type = type;
}