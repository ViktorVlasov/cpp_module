/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:36:27 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/11 16:06:22 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
}

Zombie::~Zombie()
{
    std::cout << name + " lets out a final wheeze." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << "<" + name + " " + type + "> Braiiiiiiinnnssss..." << std::endl;
}