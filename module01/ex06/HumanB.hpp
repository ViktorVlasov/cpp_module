/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 14:22:20 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/12 18:28:37 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    const Weapon *weapon;
public:
    HumanB();
    HumanB(const std::string &name);
    HumanB(const std::string &name, const Weapon &weapon);
    ~HumanB();
    void setWeapon(const Weapon &weapon);
    void attack(void);
};

#endif