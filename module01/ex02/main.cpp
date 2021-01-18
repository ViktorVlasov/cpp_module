/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:36:14 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/18 17:40:41 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(int argc, char const *argv[])
{
    ZombieEvent zombieEventSmall;

    zombieEventSmall.setZombieType("SmallZomb");
    Zombie *first_zomb = zombieEventSmall.randomChump();
    Zombie *second_zomb = zombieEventSmall.randomChump();
    
    Zombie *zomb_ev_name = zombieEventSmall.newZombie("Frank");
    zomb_ev_name->announce();

    Zombie zomb_with_name("Charlie", "Fatman");
    zomb_with_name.announce();
    
    delete first_zomb;
    delete second_zomb;
    delete zomb_ev_name;
    return 0;
}
