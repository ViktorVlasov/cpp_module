/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 10:25:52 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/30 12:10:14 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{}

PowerFist::PowerFist(const PowerFist &powerFist) :
    AWeapon(powerFist)
{}

PowerFist:: ~PowerFist() {}

PowerFist &PowerFist::operator=(const PowerFist &powerFist)
{
    AWeapon::operator=(powerFist);
    return (*this);
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *\n";
}