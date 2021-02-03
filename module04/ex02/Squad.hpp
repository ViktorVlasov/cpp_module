/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 00:01:55 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/01 15:06:41 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad: public ISquad
{
private:
	int count;
	ISpaceMarine **units;
public:
	Squad();
	Squad(const Squad &squad);
	virtual ~Squad();
	Squad &operator=(const Squad &squad);

	int getCount(void) const;
	ISpaceMarine *getUnit(int index) const;
	int push(ISpaceMarine *unit);
};

Squad::Squad() : count(0), units(nullptr)
{}

Squad::Squad(Squad const &squad) : count(0), units(nullptr)
{
	this->count = 0;
	for (int i = 0; i < squad.getCount(); i++)
		this->push(squad.getUnit(i)->clone());
}

Squad::~Squad()
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
	}
}

Squad &Squad::operator=(Squad const &other)
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
		this->units = nullptr;
	}
	this->count = 0;
	for (int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
	return (*this);
}

int Squad::getCount(void) const
{
	return (this->count);
}

ISpaceMarine* Squad::getUnit(int index) const
{
	if (this->count == 0 || index < 0 || index >= count)
		return (nullptr);
	return (this->units[index]);
}

int Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return (this->count);
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			if (this->units[i] == unit)
				return (this->count);
		ISpaceMarine **cpy = new ISpaceMarine*[this->count + 1];
		for (int i = 0; i < this->count; i++)
			cpy[i] = this->units[i];
		delete[] this->units;
		this->units = cpy;
		this->units[this->count] = unit;
		this->count++;
	}
	else
	{
		this->units = new ISpaceMarine*[1];
		this->units[0] = unit;
		this->count = 1;
	}
	return (this->count);
}

#endif