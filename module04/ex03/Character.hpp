/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 16:17:40 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/03 17:21:20 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria *_inventory[4];
    Character();
public:
    Character(const std::string &name);
    Character(const Character &character);
    virtual ~Character();
    Character &operator=(const Character& character);

    const std::string &getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};

#endif