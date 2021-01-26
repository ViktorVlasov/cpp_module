/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 00:06:25 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/26 23:55:06 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : hp(100), max_hp(100), ep(50), max_ep(50),
                        level(1), name("Ninja Assassin"),
                        mellee_attack_damage(20), ranged_attack_damage(15),
                        armor_damage_reduction(3)
{
    std::cout << this->name << ": Activating good cop mode..." << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : hp(100), max_hp(100), ep(50), max_ep(50),
                        level(1), name(name),
                        mellee_attack_damage(20), ranged_attack_damage(15),
                        armor_damage_reduction(3)
{
    std::cout << this->name << ": You can call me Gundalf!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << this->name << ": The robot is dead, long live the robot!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
    std::cout << scavTrap.name << ": Let's get this party started!" << std::endl;
    *this = scavTrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ScavTrap)
{
	this->hp = ScavTrap.hp;
    this->max_hp = ScavTrap.max_hp;
    this->ep = ScavTrap.ep;
    this->max_ep = ScavTrap.max_ep;
    this->level = ScavTrap.level;
    this->name = ScavTrap.name;
    this->mellee_attack_damage = ScavTrap.mellee_attack_damage;
    this->ranged_attack_damage = ScavTrap.ranged_attack_damage;
    this->armor_damage_reduction = ScavTrap.armor_damage_reduction;
	return (*this);
}

void ScavTrap::rangedAttack(const std::string &target)
{
    if (this->hp > 0)
    {
        std::cout << "SC4V-TP  <" << this->name << "> attacks <" \
        << target << "> at range, causing <" << std::to_string(this->ranged_attack_damage) \
        << "> point of damage!" << std::endl;
    }
}

void ScavTrap::meleeAttack(const std::string &target)
{
    if (this->hp > 0)
    {
        std::cout << "SC4V-TP <" << this->name << "> attacks <" \
        << target << "> at melee, causing <" << std::to_string(this->mellee_attack_damage) \
        << "> point of damage!" << std::endl; 
    }
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (this->hp > 0)
    {
        int damage;

        damage = amount > this->armor_damage_reduction ? amount - this->armor_damage_reduction : 0;
        if (damage >= this->hp)
        {
            damage = this->hp;
            this->hp = 0;
        }
        else 
            this->hp = this->hp - damage;
        std::cout << "SC4V-TP  <" << this->name << "> takes " \
        << damage << " point of damage!" << std::endl;
        std::cout << this->name << ": Boiyoiyoiyoiyoing!" << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->hp > 0)
    {
        int repair_points;
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
        std::cout << "FR4G-TP <" << this->name << "> repairs " \
        << repair_points << " hp!" << std::endl;
        std::cout << this->name << ": Ha ha ha! I LIVE! Hahaha!" << std::endl;
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
	    std::cout << this->name << ": " << phrases[rand() % 5] << std::endl;
}
