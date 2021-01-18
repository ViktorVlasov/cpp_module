/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:43:47 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/18 20:08:45 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
private:
    int hp;
    int max_hp;
    int ep;
    int max_ep;
    int level;
    std::string name;
    int mellee_attack_damage;
    int ranged_attack_damage;
    int armor_damage_reduction;
public:
    FragTrap();
    FragTrap(const FragTrap &fragTrap);
    FragTrap(std::string name);
    ~FragTrap();

    FragTrap &operator=(const FragTrap &fixed);
    
    void rangedAttack(const std::string &target);
    void meleeAttack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const &target);
};

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
    std::cout << "FR4G-TP <" << this->name << "> attacks <" \
     << target << "> at range, causing <" << std::to_string(this->ranged_attack_damage) \
     << "> point of damage!"; 
}

void FragTrap::meleeAttack(const std::string &target)
{
    std::cout << "FR4G-TP <" << this->name << "> attacks <" \
     << target << "> at melee, causing <" << std::to_string(this->mellee_attack_damage) \
     << "> point of damage!"; 
}

void FragTrap::takeDamage(unsigned int amount)
{
    
    std::cout << "Why do I even feel pain?!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    
}

#endif