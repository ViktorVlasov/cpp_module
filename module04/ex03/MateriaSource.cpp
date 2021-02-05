/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 17:33:46 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/05 13:25:14 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
	this->operator=(materiaSource);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i])
			delete _inventory[i];
		_inventory[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i])
			delete _inventory[i];
		if (materiaSource._inventory[i])
			_inventory[i] = materiaSource._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!_inventory[i] && materia)
		{
			_inventory[i] = materia;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i] && _inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	}
	return (NULL);
}