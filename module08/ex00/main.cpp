/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 20:28:45 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/27 20:56:25 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main(void)
{
    {
        std::cout << "=================TEST 1: vector of int=================" << std::endl;
        std::vector<int> test1 {1, 2, 2, 5, 5, 3, 7, 8, 9, 2};
        try
        {
            std::cout << *easyfind(test1, 3) << std::endl;
            std::vector<int>::iterator it = easyfind(test1, 3);
            *it = 100;
            for (int i: test1)
                std::cout << i << " ";
            std::cout << std::endl;
            std::cout << *easyfind(test1, 3) << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {
        std::cout << "=================TEST 2: list of int=================" << std::endl;
        std::list<int> test2 {1, 2, 2, 5, 5, 3, 7, 8, 9, 3};
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
        std::deque<int> test3 {1, 2, 2, 5, 5, 3, 7, 8, 9, 3};
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
