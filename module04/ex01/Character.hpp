/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 11:09:55 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/30 12:14:57 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"
# include "RadScorpion.hpp"
# include "SuperMutant.hpp"
# include "PlasmaRifle.hpp"
# include "PowerFist.hpp"

class Character
{
private:
    std::string name;
    int ap;
    AWeapon *weapon;
    Character();
public:
    Character(const std::string &name);
    Character(const Character &character);
    virtual ~Character();
    Character &operator=(const Character &character);

    void recoverAP();
    void equip(AWeapon* weapon);
    void attack(Enemy* enemy);
    int getAP() const;
    AWeapon *getWeapon() const;
    const std::string &getName() const;
};

std::ostream& operator<< (std::ostream &out, const Character &character);

#endif