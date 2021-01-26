/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 00:23:47 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/26 20:51:40 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
ClapTrap::ClapTrap() : hp(100), max_hp(100), ep(100), max_ep(100),
                        level(1), name("ClaaaapDefault"),
                        mellee_attack_damage(5), ranged_attack_damage(5),
                        armor_damage_reduction(5)
{
    std::cout << "It's clapTrap constructor without params." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : hp(100), max_hp(100), ep(100), max_ep(100),
                        level(1), name(name),
                        mellee_attack_damage(5), ranged_attack_damage(5),
                        armor_damage_reduction(5)
{
    std::cout << "ClapTrap constructor with name " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
    std::cout << "ClapTrap copy constructor" << std::endl;
    *this = clapTrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{
	this->hp = clapTrap.hp;
    this->max_hp = clapTrap.max_hp;
    this->ep = clapTrap.ep;
    this->max_ep = clapTrap.max_ep;
    this->level = clapTrap.level;
    this->name = clapTrap.name;
    this->mellee_attack_damage = clapTrap.mellee_attack_damage;
    this->ranged_attack_damage = clapTrap.ranged_attack_damage;
    this->armor_damage_reduction = clapTrap.armor_damage_reduction;

	return (*this);
}

std::string ClapTrap::getName(void) const { return (this->name); }

ClapTrap::~ClapTrap() { std::cout << "ClapTrap destructor" << std::endl; }
