/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 16:17:08 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/03 17:21:27 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name) : _name(name)
{
    for (int i = 0; i < 4; ++i)
	    this->_inventory[i] = NULL;
}

Character::Character(const Character& character) : _name(character._name)
{
	for (int i = 0; i < 4; ++i)
		if (this->_inventory[i])
			delete this->_inventory[i];
	for (int i = 0; i < 4; i++)
		if (character._inventory[i])
			this->_inventory[i] = character._inventory[i]->clone();
}

Character::~Character()
{
    for (int i = 0; i < 4; ++i)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

Character &Character::operator=(const Character& character)
{
    this->_name = character._name;
    for (int i = 0; i < 4; ++i)
    {
        if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = character._inventory[i];
    }
	return (*this);
}

const std::string &Character::getName(void) const { return (this->_name); }

void Character::equip(AMateria *m)
{
	int i = 0;

    while (i < 4 && this->_inventory[i] != NULL)
        i++;
	if (i < 4)
		this->_inventory[i] = m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx]->use(target);
}