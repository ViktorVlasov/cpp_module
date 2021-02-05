/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 00:09:03 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/05 11:43:30 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    
    std::cout << "\n====== using clone method ======" << std::endl;
    
    int k = vlc->push(bob->clone());
    std::cout << "count units: " << k << std::endl;
    k = vlc->push(jim->clone());
    std::cout << "count units: " << k << std::endl;

    std::cout << "====== end using clone method ======" << std::endl;
    
    delete vlc;

    {
        std::cout << "\n====== ASSIGNMENT EMPTY SQUAD TEST ======" << std::endl;

        Squad so;
        Squad sc;

        so.push(new TacticalMarine());
        so.push(new AssaultTerminator());
        so.push(new TacticalMarine());

        std::cout << "== size before assignment ==" << std::endl;

        std::cout << "so size: " << so.getCount() << std::endl;
        std::cout << "sc size: " << sc.getCount() << std::endl;

        std::cout << "== size after assignment ==" << std::endl;

        sc = so;
        std::cout << "so size: " << so.getCount() << std::endl;
        std::cout << "sc size: " << sc.getCount() << std::endl;

        std::cout << "====== END ASSIGNMENT EMPTY SQUAD TEST ======\n" << std::endl;   
    }

    {
        std::cout << "\n====== ASSIGNMENT SQUAD TEST ======" << std::endl;

        Squad so;
        Squad sc;

        so.push(new TacticalMarine());
        so.push(new AssaultTerminator());
        so.push(new TacticalMarine());

        sc.push(new TacticalMarine());

        std::cout << "== size before assignment ==" << std::endl;

        std::cout << "so size: " << so.getCount() << std::endl;
        std::cout << "sc size: " << sc.getCount() << std::endl;

        std::cout << "== size after assignment ==" << std::endl;

        sc = so;
        std::cout << "so size: " << so.getCount() << std::endl;
        std::cout << "sc size: " << sc.getCount() << std::endl;

        std::cout << "====== END ASSIGNMENT SQUAD TEST ======\n" << std::endl;   
    }
    
    {
        std::cout << "\n====== COPY SQUAD TEST ======" << std::endl;

        Squad so;

        so.push(new TacticalMarine());
        so.push(new AssaultTerminator());
        so.push(new TacticalMarine());

        Squad sc(so);
        std::cout << "so size: " << so.getCount() << std::endl;
        std::cout << "sc size: " << sc.getCount() << std::endl;

        std::cout << "====== END COPY SQUAD TEST ======\n" << std::endl;   
    }
    
    return 0;
}