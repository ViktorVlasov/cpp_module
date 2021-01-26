/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:02:13 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/26 23:35:47 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main(int argc, char const *argv[])
{
    SuperTrap superTest("SuperTester");
    std::cout << "=======" << std::endl;

    NinjaTrap ninjaTest("NinjaTester");    
    std::cout << "=======" << std::endl;
       
    superTest.NinjaTrap::meleeAttack(ninjaTest.getName());
    superTest.ninjaShoebox(ninjaTest);
    superTest.FragTrap::rangedAttack(ninjaTest.getName());

    std::cout << "=======" << std::endl;
    return 0;
}
