/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 00:24:06 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/26 20:51:02 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
    int hp;
    int max_hp;
    int ep;
    int max_ep;
    int level;
    std::string name;
    int mellee_attack_damage;
    int ranged_attack_damage;
    int armor_damage_reduction;

public:
    ClapTrap();
    ClapTrap(const std::string &name);
    ClapTrap(const ClapTrap &clapTrap);
    virtual ~ClapTrap();
    ClapTrap &operator=(const ClapTrap &clapTrap);

    std::string getName(void) const;
};

#endif