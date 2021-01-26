/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:43:44 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/26 23:49:56 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : hp(100), max_hp(100), ep(100), max_ep(100),
                        level(1), name("Interplanetary Ninja Assassin"),
                        mellee_attack_damage(30), ranged_attack_damage(20),
                        armor_damage_reduction(5)
{
    std::cout << this->name << ": How many bullets does it take to get to the crumb of the meat sack? Let's check?" << std::endl;
}

FragTrap::FragTrap(std::string name) : hp(100), max_hp(100), ep(100), max_ep(100),
                        level(1), name(name),
                        mellee_attack_damage(30), ranged_attack_damage(20),
                        armor_damage_reduction(5)
{
    std::cout << this->name << ": Recompiling my combat code!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << this->name << ": Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
    std::cout << fragTrap.name << ": Let's get this party started!" << std::endl;
    *this = fragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
	this->hp = fragTrap.hp;
    this->max_hp = fragTrap.max_hp;
    this->ep = fragTrap.ep;
    this->max_ep = fragTrap.max_ep;
    this->level = fragTrap.level;
    this->name = fragTrap.name;
    this->mellee_attack_damage = fragTrap.mellee_attack_damage;
    this->ranged_attack_damage = fragTrap.ranged_attack_damage;
    this->armor_damage_reduction = fragTrap.armor_damage_reduction;
	return (*this);
}

void FragTrap::rangedAttack(const std::string &target)
{
    if (this->hp > 0)
    {
        std::cout << "FR4G-TP <" << this->name << "> attacks <" \
        << target << "> at range, causing <" << std::to_string(this->ranged_attack_damage) \
        << "> point of damage!" << std::endl;
    }
}

void FragTrap::meleeAttack(const std::string &target)
{
    if (this->hp > 0)
    {
        std::cout << "FR4G-TP <" << this->name << "> attacks <" \
        << target << "> at melee, causing <" << std::to_string(this->mellee_attack_damage) \
        << "> point of damage!" << std::endl; 
    }
}

void FragTrap::takeDamage(unsigned int amount)
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
        std::cout << "FR4G-TP <" << this->name << "> takes " \
        << damage << " point of damage!" << std::endl;
        std::cout << this->name << ": Why do I even feel pain?!" << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount)
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

std::string FragTrap::phrases[5] = {
	"Loading combat packages!",
	"I'm a robot ninja...",
	"Avada kedavra!",
	"I'm a sexy dinosaur! Rawr!",
	"Resequencing combat protocols!"
};

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{   
    if (this->hp > 0)
    {
        if (this->ep >= 25)
        {
            this->ep = this->ep - 25;
            std::cout << this->name << ": " << phrases[rand() % 5] << std::endl;
            std::cout << "FR4G-TP <" << this->name << "> attacks <" 
                << target << "> at range, causing <" << std::to_string((rand() % 10) + this->ranged_attack_damage) \
                << "> point of damage!" << std::endl;
        }
        else
            std::cout << "FR4G-TP <" << this->name << ">: Not enough energy for vaulthunter! :(";
    }
}
