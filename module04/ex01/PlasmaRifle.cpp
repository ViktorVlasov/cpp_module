/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 10:23:39 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/30 12:10:36 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &plasmaRifle) :
    AWeapon(plasmaRifle)
{}

PlasmaRifle:: ~PlasmaRifle() {}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &plasmaRifle)
{
    AWeapon::operator=(plasmaRifle);
    return (*this);
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *\n";
}