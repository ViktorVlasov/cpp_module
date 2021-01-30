/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 10:29:15 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/30 12:05:36 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
protected:
    int hp;
    std::string type;
private:
    Enemy();
public:
    Enemy(int hp, const std::string &type);
    Enemy(const Enemy &enemy);
    virtual ~Enemy();
    Enemy &operator=(const Enemy &enemy);

    const std::string &getType() const;
    int getHP() const;
    virtual void takeDamage(int damage);
};

#endif 