/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:50:31 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/18 15:00:06 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_value = (value << Fixed::num_fract_bits);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_value = roundf(value * (1 << Fixed::num_fract_bits));
}

Fixed::Fixed(const Fixed &fixed) 
{
    std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
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
	return (this->fixed_value);
}

void Fixed::setRawBits(const int Raw)
{
	this->fixed_value = Raw;
}

int Fixed::toInt(void) const
{
	return (this->fixed_value >> Fixed::num_fract_bits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->fixed_value / (float)(1 << Fixed::num_fract_bits));
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
    return (out);
}