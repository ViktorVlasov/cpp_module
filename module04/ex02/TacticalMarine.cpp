/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 00:01:25 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/31 00:04:38 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle\n";
}

TacticalMarine::TacticalMarine(const TacticalMarine &tacticalMarine)
{
    (void)tacticalMarine;
    std::cout << "Tactical Marine ready for battle\n";
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh...\n";
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine& tacticalMarine)
{
    (void)tacticalMarine;
    return (*this);
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!\n";
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *\n";
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *\n";
}

ISpaceMarine *TacticalMarine::clone() const
{
    return (new TacticalMarine(*this));
}