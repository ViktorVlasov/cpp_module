/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:07:03 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/05 11:40:52 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : count(0), arr_units(NULL)
{}

Squad::Squad(Squad const &squad) : count(0), arr_units(NULL)
{
	this->count = 0;
	for (int i = 0; i < squad.getCount(); i++)
		this->push(squad.getUnit(i)->clone());
}

Squad::~Squad()
{
	if (this->arr_units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->arr_units[i];
		delete this->arr_units;
		this->arr_units = NULL;
	}
}

Squad &Squad::operator=(Squad const &squad)
{
	this->~Squad();
	this->count = 0;
	for (int i = 0; i < squad.getCount(); i++)
		this->push(squad.getUnit(i)->clone());
	return (*this);
}

int Squad::getCount(void) const
{
	return (this->count);
}

ISpaceMarine* Squad::getUnit(int n) const
{
	if (n >= this->count || n < 0)
		return (NULL);
	return (this->arr_units[n]);
}

int Squad::push(ISpaceMarine *unit)
{
	ISpaceMarine **new_arr_units;

	if (!unit)
		return (-1);
	if (!this->arr_units)
	{
		this->arr_units = new ISpaceMarine*[1];
		this->arr_units[0] = unit;
		this->count = 1;
	}
	else
	{
		for (int i = 0; i < this->count; i++)
			if (this->arr_units[i] == unit)
				return (-1);
		new_arr_units = new ISpaceMarine*[this->count + 1];
		for (int i = 0; i < this->count; i++)
			new_arr_units[i] = this->arr_units[i];
		new_arr_units[this->count] = unit; 
		delete[] this->arr_units;
		this->arr_units = new_arr_units;
		this->count++;
	}
	return (this->count);
}