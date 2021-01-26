/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 00:06:25 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/27 00:10:24 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->ep = 50;
    this->max_ep = 50;
    this->name = "Ninja Assassin";
    this->mellee_attack_damage = 20;
    this->ranged_attack_damage = 15;
    this->armor_damage_reduction = 3;
    std::cout << this->getName() << ": Activating good cop mode..." << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    this->ep = 50;
    this->max_ep = 50;
    this->mellee_attack_damage = 20;
    this->ranged_attack_damage = 15;
    this->armor_damage_reduction = 3;
    std::cout << this->getName() << ": You can call me Gundalf!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << this->getName() << ": The robot is dead, long live the robot!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
    std::cout << scavTrap.getName()  << ": Let's get this party started!" << std::endl;
    *this = scavTrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
	ClapTrap::operator=(scavTrap);
	return (*this);
}

void ScavTrap::rangedAttack(const std::string &target)
{
    if (this->hp > 0)
    {
        std::cout << "SC4V-TP  <" << this->getName() << "> attacks <" \
        << target << "> at range, causing <" << std::to_string(this->ranged_attack_damage) \
        << "> point of damage!" << std::endl;
    }
}

void ScavTrap::meleeAttack(const std::string &target)
{
    if (this->hp > 0)
    {
        std::cout << "SC4V-TP <" << this->getName() << "> attacks <" \
        << target << "> at melee, causing <" << std::to_string(this->mellee_attack_damage) \
        << "> point of damage!" << std::endl; 
    }
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (this->hp > 0)
    {
        std::cout << this->getName() << ": Boiyoiyoiyoiyoing!" << std::endl;
        int damage;

        damage = amount > this->armor_damage_reduction ? amount - this->armor_damage_reduction : 0;
        if (damage >= this->hp)
        {
            damage = this->hp;
            this->hp = 0;
        }
        else 
            this->hp = this->hp - damage;
        std::cout << "SC4V-TP  <" << this->getName() << "> takes " \
        << damage << " point of damage!" << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->hp > 0)
    {
        int repair_points;
        std::cout << this->getName() << ": Ha ha ha! I LIVE! Hahaha!" << std::endl;
        if ((this->hp + amount) >= this->max_ep)
        {
            repair_points = max_hp - this->hp;
            this->hp = this->max_hp;
        }
        else
        {
            repair_points = amount;
            this->hp += repair_points;
        }
        std::cout << "FR4G-TP <" << this->getName() << "> repairs " \
        << repair_points << " hp!" << std::endl;
    }
}

std::string ScavTrap::phrases[5] = {
	"Mini-trap, pretend you're a Siren!",
    "Aww, I should've drawn tattoos on you!",
    "Burn them, my mini-phoenix!",
    "All burn before the mighty Siren-trap!",
    "Calm down!"
};


void ScavTrap::challengeNewcomer(void)
{
    if (this->hp > 0)
	    std::cout << this->getName() << ": " << phrases[rand() % 5] << std::endl;
}
