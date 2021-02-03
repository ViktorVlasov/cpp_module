/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 00:05:04 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/31 00:08:07 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *\n";
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &assaultTerminator)
{
    (void)assaultTerminator;
    std::cout << "* teleports from space *\n";
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back...\n";
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator& assaultTerminator)
{
    (void)assaultTerminator;
    return (*this);
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!\n";
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *\n";
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *\n";
}

ISpaceMarine *AssaultTerminator::clone() const
{
    return (new AssaultTerminator(*this));
}