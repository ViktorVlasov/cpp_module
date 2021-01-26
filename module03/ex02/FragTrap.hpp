/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:43:47 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/26 20:52:42 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
private:
    static std::string phrases[5];
public:
    FragTrap();
    FragTrap(const FragTrap &fragTrap);
    FragTrap(const std::string &name);
    ~FragTrap();

    FragTrap &operator=(const FragTrap &fragTrap);
    
    void rangedAttack(const std::string &target);
    void meleeAttack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const &target);
};

#endif