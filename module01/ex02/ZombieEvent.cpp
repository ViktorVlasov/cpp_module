/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:36:23 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/13 11:56:46 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() : type("")
{
    srand(static_cast<unsigned int>(time(0)));
}

ZombieEvent::~ZombieEvent()
{
    std::cout << "End of the event!" << std::endl;
}

void ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(name, type));
}

Zombie *ZombieEvent::randomChump(void)
{
    std::string name;
    
    name = "Zombie" + std::to_string(rand() % 50);
    Zombie *randomZombie = newZombie(name);
    randomZombie->announce();
    return (randomZombie);
}