/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:43:47 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/26 20:54:05 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap
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
    FragTrap();
    FragTrap(const FragTrap &fragTrap);
    FragTrap(std::string name);
    ~FragTrap();

    FragTrap &operator=(const FragTrap &fragTrap);
    
    void rangedAttack(const std::string &target);
    void meleeAttack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const &target);
};

#endif