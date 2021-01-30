/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 11:02:46 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/30 11:03:20 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(int hp, const std::string &type) : 
        Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!\n"; 
}

SuperMutant::SuperMutant(const SuperMutant &superMutant) : 
        Enemy(superMutant)
{
    std::cout << "Gaaah. Me want smash heads!\n"; 
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh...\n";
}

SuperMutant &SuperMutant::operator=(const SuperMutant &superMutant)
{
    Enemy::operator=(superMutant);
    return (*this);
}

void SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
}