/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 09:54:37 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/30 10:10:37 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
protected:
    std::string name;
    int apcost;
    int damage;
private:
    AWeapon();
public:
    AWeapon(const std::string &name, int apcost, int damage);
    AWeapon(const AWeapon &aweapon);
    virtual ~AWeapon();
    AWeapon &operator=(const AWeapon &aweapon);
    
    const std::string &getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;
};

#endif