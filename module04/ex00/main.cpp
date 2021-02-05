/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 23:31:25 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/04 21:03:43 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");

    std::cout << robert << jim << joe;
    
    robert.polymorph(jim);
    robert.polymorph(joe);

    std::cout << "\n============ getPolymorphed ============\n";

    jim.getPolymorphed();
    joe.getPolymorphed();
    
    std::cout << "\n============ TESTS ============\n";
    
    Sorcerer robertCpy(robert);
    Victim jimCpy(jim);
    Peon joeCpy(joe);

    std::cout << robert << jim << joe;

    robertCpy.polymorph(jimCpy);
    
    std::cout << "\n============ EXTRA ============\n";
    
    Victim *peon = new Peon("PeonFromHeap");
    std::cout << *peon;
    delete peon;
    
    std::cout << "\n============ DESTRUCTORS ============\n";

    return 0;
}