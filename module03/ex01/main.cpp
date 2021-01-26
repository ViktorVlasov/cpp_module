/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:43:50 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/26 23:58:21 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <ctime>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    
    ScavTrap scavTest("scavTester");
    
    scavTest.meleeAttack("testTarget");
    scavTest.rangedAttack("testTarget");
    scavTest.challengeNewcomer();

    return 0;
}
