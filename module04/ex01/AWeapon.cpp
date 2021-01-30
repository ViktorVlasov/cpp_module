/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 10:10:40 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/30 10:21:18 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage) :
                name(name), apcost(apcost), damage(damage)
{}

AWeapon::AWeapon(const AWeapon &aweapon) :
        name(aweapon.name), apcost(aweapon.apcost), damage(aweapon.apcost)
{}

AWeapon::~AWeapon() {}

AWeapon &AWeapon::operator=(const AWeapon &aweapon)
{
    this->name = aweapon.name;
    this->apcost = aweapon.apcost;
    this->damage = aweapon.damage;
    return (*this);
}

const std::string &AWeapon::getName() const { return (this->name); }
int AWeapon::getAPCost() const { return (this->apcost); }
int AWeapon::getDamage() const { return (this->damage); }