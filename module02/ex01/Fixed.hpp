/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:50:40 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/18 14:44:41 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
    int fixed_value;
    static const int num_fract_bits = 8;
public:
    Fixed();
    Fixed(const Fixed &fixed);
    Fixed(const int value);
    Fixed(const float value);
    
    ~Fixed();
    Fixed &operator=(Fixed const &fixed);
     
    int getRawBits(void) const;
    void setRawBits(const int Raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

#endif