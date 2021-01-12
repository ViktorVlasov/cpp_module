/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:13:05 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/12 11:36:17 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int size)
{
    std::string name;
    srand(static_cast<unsigned int>(time(0)));

    zombArr = new Zombie[size];
    this->size = size;    
    for (int i = 0; i < size; i++)
    {
        name = "Zombie" + std::to_string(rand() % 50);
        zombArr[i].setFeatures(name, "Normal");
    }
}

void ZombieHorde::announce(void)
{
    for (int i = 0; i < size; i++)
        zombArr[i].announce();
}

ZombieHorde::~ZombieHorde()
{
    delete[] zombArr;
    std::cout << "You killed zombie horde." << std::endl;
}