/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:36:14 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/12 11:40:14 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(int argc, char const *argv[])
{
    ZombieHorde zombieHordeNormal(5);

    zombieHordeNormal.announce();
    return 0;
}
