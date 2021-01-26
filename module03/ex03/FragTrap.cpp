/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:43:44 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/26 20:58:21 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->mellee_attack_damage = 30;
    this->ranged_attack_damage = 20;
    this->armor_damage_reduction = 5;
    this->name = "FragTrapDefault";
    std::cout << this->name << ": How many bullets does it take to get to the crumb of the meat sack? Let's check?" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    this->mellee_attack_damage = 30;
    this->ranged_attack_damage = 20;
    this->armor_damage_reduction = 5;
    std::cout << this->name << ": Recompiling my combat code!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << this->getName() << ": Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
    std::cout << fragTrap.getName() << ": Let's get this party started!" << std::endl;
    *this = fragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
	ClapTrap::operator=(fragTrap);
	return (*this);
}

void FragTrap::rangedAttack(const std::string &target)
{
    if (this->hp > 0)
    {
        std::cout << "FR4G-TP <" << this->getName() << "> attacks <" \
        << target << "> at range, causing <" << std::to_string(this->ranged_attack_damage) \
        << "> point of damage!" << std::endl;
    }
}

void FragTrap::meleeAttack(const std::string &target)
{
    if (this->hp > 0)
    {
        std::cout << "FR4G-TP <" << this->getName() << "> attacks <" \
        << target << "> at melee, causing <" << std::to_string(this->mellee_attack_damage) \
        << "> point of damage!" << std::endl; 
    }
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (this->hp > 0)
    {
        std::cout << this->getName() << ": Why do I even feel pain?!" << std::endl;
        int damage;

        damage = amount > this->armor_damage_reduction ? amount - this->armor_damage_reduction : 0;
        if (damage >= this->hp)
        {
            damage = this->hp;
            this->hp = 0;
        }
        else 
            this->hp = this->hp - damage;
        std::cout << "FR4G-TP <" << this->getName() << "> takes " \
        << damage << " point of damage!" << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount)
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
            std::cout << this->getName() << ": " << phrases[rand() % 5] << std::endl;
            std::cout << "FR4G-TP <" << this->getName() << "> attacks <" 
                << target << "> at range, causing <" << std::to_string((rand() % 10) + this->ranged_attack_damage) \
                << "> point of damage!" << std::endl;
        }
        else
            std::cout << "FR4G-TP <" << this->getName() << ">: Not enough energy for vaulthunter! :(";
    }
}
