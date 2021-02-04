/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 17:22:42 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/03 17:30:00 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : _xp(0), _type(type)
{}

AMateria::AMateria(const AMateria &amateria) : _xp(amateria._xp), _type(amateria._type)
{}

AMateria::~AMateria()
{}

AMateria &AMateria::operator=(const AMateria &amateria)
{
    this->_xp = amateria._xp;
    return (*this);
}

const std::string &AMateria::getType() const { return (this->_type); }
unsigned int AMateria::getXP() const { return (this->_xp); }

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}
