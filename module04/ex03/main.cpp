/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 17:33:48 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/25 20:08:27 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    
    {
        std::cout << "\n=========== TEST ===========\n"; 

        Character hero("Hero");

        hero.equip(new Cure());
        hero.equip(new Ice());

        Character cpy_hero(hero);

        cpy_hero.use(0, hero);
        cpy_hero.use(1, hero);
        cpy_hero.use(2, hero);

        cpy_hero.use(0, hero);

        std::cout << "=========== TEST END ===========\n"; 
    }
    
    {
        std::cout << "\n=========== TEST 2 ===========\n"; 

        Character hero("Hero");
        hero.equip(new Cure());
        hero.equip(new Cure());
        hero.equip(new Ice());

        Character assign_hero("Mark");
        assign_hero.equip(new Ice());
        
        Character target_hero("Harry");
        
        assign_hero = hero;        
        assign_hero.use(0, target_hero);
        assign_hero.use(1, target_hero);
        assign_hero.use(2, target_hero);
        assign_hero.use(3, target_hero);

        std::cout << "=========== TEST 2 END ===========\n"; 
    }

    {
        std::cout << "\n=========== TEST 3 ===========\n"; 

        Character hero("Hero");
        
        MateriaSource test_source;

        test_source.learnMateria(new Ice());
        test_source.learnMateria(new Cure());
        test_source.learnMateria(new Ice());
        test_source.learnMateria(NULL);

        MateriaSource cpy_source(test_source);
        hero.equip(cpy_source.createMateria("ice"));
        hero.use(0, hero);

        MateriaSource assign_source;
        assign_source = test_source;
        hero.equip(cpy_source.createMateria("cure"));
        hero.use(1, hero);

        std::cout << "=========== TEST 3 END ===========\n"; 
    }
    return 0;
}