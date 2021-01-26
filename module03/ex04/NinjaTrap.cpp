/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:42:28 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/26 23:34:15 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	std::cout << this->name << ": Ooooohhh my..." << std::endl;
	this->hp = 60;
	this->max_hp = 60;
	this->ep = 120;
	this->max_ep = 120;
	this->mellee_attack_damage = 60;
	this->ranged_attack_damage = 5;
	this->armor_damage_reduction = 0;
	this->name = "NinjaTrapDefault";
}

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << this->name << ": Ooooohhh my..." << std::endl;
	this->hp = 60;
	this->max_hp = 60;
	this->ep = 120;
	this->max_ep = 120;
	this->mellee_attack_damage = 60;
	this->ranged_attack_damage = 5;
	this->armor_damage_reduction = 0;
}

NinjaTrap::NinjaTrap(NinjaTrap const &ninjaTrap) : ClapTrap(ninjaTrap)
{
	std::cout << this->name << ": Ooooohhh my..." << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->name << ": Goodbye!"  << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &ninjaTrap)
{
	ClapTrap::operator=(ninjaTrap);
	return (*this);
}

/*
* melee and range attack
*/


void NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " uses rasengan and deals "
			<< this->mellee_attack_damage << " damage to " << target << std::endl;
}

void NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " uses Amaterasu and deals " 
            << this->ranged_attack_damage << " damage to " << target << std::endl;
}

/*
* ninjaShoebox
*/

void NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << this->name << " uses taijutsu and attacks " << trap.getName()  << std::endl;

}

void NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	std::cout << this->name << " uses genjutsu and attacks " << trap.getName()  << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	std::cout << this->name << " uses ninjutsu and attacks " << trap.getName()  << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	std::cout << this->name << " sees " << trap.getName() << " and says the phrase: birds of a feather flock together!" << std::endl;
}