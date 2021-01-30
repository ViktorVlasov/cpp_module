/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 11:09:19 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/30 11:09:27 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(int hp, const std::string &type) : 
        Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *\n"; 
}

RadScorpion::RadScorpion(const RadScorpion &radScorpion) : 
        Enemy(radScorpion)
{
    std::cout << "* click click click *\n"; 
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *n";
}

RadScorpion &RadScorpion::operator=(const RadScorpion &radScorpion)
{
    Enemy::operator=(radScorpion);
    return (*this);
}