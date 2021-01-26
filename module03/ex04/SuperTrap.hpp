/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 21:29:40 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/26 23:20:47 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
    SuperTrap();
	SuperTrap(const std::string &name);
	SuperTrap(const SuperTrap &superTrap);
    ~SuperTrap();

	SuperTrap &operator=(const SuperTrap &superTrap);
};

#endif