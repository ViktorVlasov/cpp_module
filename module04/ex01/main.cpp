/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 12:05:14 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/04 21:47:24 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int main()
{
    Character* me = new Character("me");

    std::cout << *me;
    
    Enemy* b = new RadScorpion();
    
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    
    std::cout << "============ BASE TESTS ============\n";

    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;

    std::cout << "============ BASE TESTS END ============\n\n";

    me->recoverAP();
    me->equip(pf);
    std::cout << *me;
    
    Enemy *s = new SuperMutant();
    
    me->attack(s);
    me->attack(s);
    me->attack(s);
    me->attack(s);
    me->attack(s);
    std::cout << *me;

    
    me->recoverAP();
    me->recoverAP();
    me->recoverAP();
    me->recoverAP();
    me->recoverAP();
    me->recoverAP();
    std::cout << *me;

    delete me;
    delete b;
    delete s;
    delete pf;
    delete pr;

    return 0;
}