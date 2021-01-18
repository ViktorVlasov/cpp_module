/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:50:31 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/18 00:48:16 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const Fixed &fixed) 
{
    std::cout << "Copy constructor called" << std::endl;
	this->fixed_value = fixed.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}


Fixed &Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_value = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_value);
}

void Fixed::setRawBits(const int Raw)
{
	this->fixed_value = Raw;
}