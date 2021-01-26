/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:43:50 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/27 00:09:15 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <ctime>

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    FragTrap fragTrapTest("frag");
    std::cout << "=========" << std::endl;
    ScavTrap scavTrapTest("scav");
    std::cout << "=========" << std::endl;

    scavTrapTest.rangedAttack("frag");
    fragTrapTest.rangedAttack("scav");
    
    fragTrapTest.vaulthunter_dot_exe("scav");
    scavTrapTest.challengeNewcomer();    

    std::cout << "=========" << std::endl;
    return 0;
}
