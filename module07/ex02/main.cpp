/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 20:55:17 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/26 21:43:32 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <sstream>

int main()
{
    {
        std::cout << "===============TEST 1: int =================\n";
        Array<int> test;
        Array<int> test1(5);
        
        test = test1;
        for (size_t i = 0; i < test.size(); i++)
        {
            test[i] = i + 1;
            std::cout << test[i] << " ";
        }
        std::cout << std::endl;   
        
        std::cout << "===============TEST 1: OutOfLimits=================\n";
        try
        {
            test[-10] = 10;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {
        std::cout << "===============TEST 2: float=================\n";
        Array<float> float_test(10);
        for (size_t i = 0; i < float_test.size(); i++) 
        {
            float_test[i] = i + 1.1f;
            std::cout << float_test[i] << " ";
        }
	    std::cout << std::endl;
        
        std::cout << "===============TEST 2: OutOfLimits=================\n";
        try
        {
            float_test[42] = 20.01f;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
	
    {
        std::cout << "===============TEST 3: String=================\n";
        std::string str_i;

        Array<std::string> string_test(5);
        for (size_t i = 0; i < string_test.size(); i++)
        {
            str_i = static_cast<std::ostringstream*>( &(std::ostringstream() << i) )->str();
            string_test[i] = "Test" + str_i;
            std::cout << string_test[i] << " ";
        }
	    std::cout << std::endl;
    }

	return (0);
}
