/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 20:28:45 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/30 22:10:31 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <ctime>

int main(void)
{
    srand(time(NULL));
    {
        std::cout << "=================TEST 1: vector of int=================" << std::endl;
        std::vector<int> test1;
        for (int i = 0; i < 10; i++)
		    test1.push_back(rand() % 10);
        try
        {           
            std::cout << *easyfind(test1, 3) << std::endl;
            for (size_t i = 0; i < test1.size(); i++)
                std::cout << test1[i] << " ";
            std::cout << std::endl;
            std::cout << *easyfind(test1, -10) << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {
        std::cout << "=================TEST 2: list of int=================" << std::endl;
        std::list<int> test2;
        for (int i = 0; i < 10; i++)
		    test2.push_back(rand() % 10);
        try
        {
            std::cout << *easyfind(test2, 7) << std::endl;        
            std::cout << *easyfind(test2, -10) << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {
        std::cout << "=================TEST 3: deque of int=================" << std::endl;
        std::deque<int> test3;
        for (int i = 0; i < 10; i++)
		    test3.push_back(rand() % 10);
        try
        {
            std::cout << *easyfind(test3, 2) << std::endl;        
            std::cout << *easyfind(test3, -10) << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    
    return 0;
}
