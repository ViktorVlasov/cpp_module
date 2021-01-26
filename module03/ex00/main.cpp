/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:43:50 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/26 23:48:38 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <ctime>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    FragTrap fragTrapFirst("Killer 3000");
    
    fragTrapFirst.meleeAttack("efumiko");
    fragTrapFirst.rangedAttack("efumiko");
    fragTrapFirst.takeDamage(50);
    fragTrapFirst.beRepaired(300);
    fragTrapFirst.vaulthunter_dot_exe("EFUMIKO");

    fragTrapFirst.takeDamage(1000);
    fragTrapFirst.vaulthunter_dot_exe("EFUMIKO");
    return 0;
}
