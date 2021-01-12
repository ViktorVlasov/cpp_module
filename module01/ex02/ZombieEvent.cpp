/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:36:23 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/11 16:02:29 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
    type = "Default";
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
    Zombie *randomZombie = new Zombie(name, type);
    randomZombie->announce();
    return (randomZombie);
}