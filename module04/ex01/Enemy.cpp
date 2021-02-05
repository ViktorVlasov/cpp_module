/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 10:43:30 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/04 21:29:08 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type) : hp(hp), type(type)
{}

Enemy::Enemy(const Enemy &enemy) : hp(enemy.hp), type(enemy.type)
{}

Enemy::~Enemy()
{}

Enemy &Enemy::operator=(const Enemy &enemy)
{
    this->hp = enemy.hp;
    this->type = enemy.type;
    return (*this);
}

const std::string &Enemy::getType() const { return (this->type); }
int Enemy::getHP() const { return (this->hp); }

void Enemy::takeDamage(int damage)
{
    if (damage >= 0)
        this->hp -= damage;
    if (this->hp < 0)
        this->hp = 0;
}