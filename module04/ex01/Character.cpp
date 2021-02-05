/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 12:14:59 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/04 21:27:41 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name) : 
        name(name), ap(40), weapon(NULL)
{}

Character::Character(const Character &character) : 
        name(character.name), ap(character.ap), weapon(character.weapon)
{}

Character::~Character()
{}

Character &Character::operator=(const Character &character)
{
    this->name = character.name;
    this->ap = character.ap;
    this->weapon = character.weapon;
    return (*this);
}

int Character::getAP() const { return (this->ap); }
AWeapon *Character::getWeapon() const { return (this->weapon); }
const std::string &Character::getName() const { return (this->name); }


std::ostream& operator<< (std::ostream &out, const Character &character)
{    
    out << character.getName() << " has " << character.getAP();
    if (character.getWeapon() != NULL)
        out << " AP and wields a " << character.getWeapon()->getName() << std::endl;
    else
        out << " AP and is unarmed" << std::endl;
    return (out);
}

void Character::recoverAP()
{
    if (this->ap < 30)
        this->ap += 10;
    else
        this->ap = 40;
}

void Character::equip(AWeapon* weapon)
{
    this->weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
    if (weapon && enemy && ap >= weapon->getAPCost())
    {
        std::cout << name << " attacks " << enemy->getType() 
            << " with a " << weapon->getName() << std::endl;
        ap -= weapon->getAPCost();
        weapon->attack();
        enemy->takeDamage(weapon->getDamage());
        if (enemy->getHP() == 0)
            enemy->~Enemy();
    }
}