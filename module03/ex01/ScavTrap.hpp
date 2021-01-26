/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 00:05:27 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/26 20:53:24 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{
private:
    int hp;
    int max_hp;
    int ep;
    int max_ep;
    int level;
    std::string name;
    int mellee_attack_damage;
    int ranged_attack_damage;
    int armor_damage_reduction;

    static std::string phrases[5];
public:
	ScavTrap();
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &scavTrap);
	virtual ~ScavTrap();

	ScavTrap &operator=(ScavTrap const &scavTrap);

	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(void);
};

#endif