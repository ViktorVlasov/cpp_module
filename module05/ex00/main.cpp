/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:27:14 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/26 11:03:05 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

 int main()
 {
    try
    {
        Bureaucrat test1("Norman", 149);
        
        std::cout << test1 << std::endl;
        test1.incrementGrade();
        std::cout << test1 << std::endl;
        test1.decrementGrade();
        std::cout << test1 << std::endl;
        test1.decrementGrade();
        std::cout << test1 << std::endl;
        test1.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << "Test1: " << e.what() << std::endl;
    }

    std::cout << "==============================================" << std::endl;

    try
    {
        Bureaucrat test2("Norman", 1);
        
        std::cout << test2 << std::endl;
        test2.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << "Test2: " << e.what() << std::endl;
    }

    std::cout << "==============================================" << std::endl;
    
    try
    {
        Bureaucrat test3("Norman", 0);
    }
    catch (std::exception &e)
    {
        std::cout << "Test3: " << e.what() << std::endl;
    }

    {
        std::cout << "==============================================" << std::endl;
        Bureaucrat test4("Norman", 1);

        std::cout << test4 << std::endl;
        std::cout << test4.getName() << " " << test4.getGrade() << std::endl;
    }
    
    return 0;
 }
 