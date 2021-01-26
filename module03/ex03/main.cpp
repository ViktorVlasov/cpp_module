/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:38:26 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/27 00:17:02 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <ctime>

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    FragTrap fragTest("Frag");
    std::cout << "================" << std::endl;
    ScavTrap scavTest("Scav");
    std::cout << "================" << std::endl;
    NinjaTrap ninjaTest("Ninja");
    std::cout << "================" << std::endl;
    ClapTrap clapTest("Clap");
    std::cout << "================" << std::endl;

    ninjaTest.ninjaShoebox(fragTest);
    ninjaTest.ninjaShoebox(scavTest);
    ninjaTest.ninjaShoebox(ninjaTest);
    ninjaTest.ninjaShoebox(clapTest);
    ninjaTest.meleeAttack("efumiko");

    std::cout << "================" << std::endl;
    return 0;
}
