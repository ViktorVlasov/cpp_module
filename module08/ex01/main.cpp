/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:00:02 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/30 20:47:12 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	{
		std::cout << "==========SUBJECT==========\n";
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;		
	}
	
	{
		std::cout << "==========TEST 1==========\n";
		srand(time(NULL));
		Span sp(10);
    	int value;
		for (int i = 0; i < 10; i++)
        {
			value = rand() % 10;
			std::cout << value << " ";	
			sp.addNumber(value);
		}
		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::cout << "====COPY TEST====" << std::endl;
		Span copy_sp(sp);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	{
		std::cout << "==========TEST 2==========\n";
		std::vector<int> arr;
		srand(time(NULL));
    	int value;
		for (int i = 0; i < 10000; i++)
		{
			value = rand() % 10000;
			arr.push_back(value);
		}
		Span sp(10000);
		sp.addNumber(arr.begin(), arr.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	{
		std::cout << "==========TEST 3==========\n";
		srand(time(NULL));
		Span sp(10);
    	int value;
		for (int i = 0; i < 10; i++)
        {
			value = rand() % 10;
			std::cout << value << " ";	
			sp.addNumber(value);
		}
		std::cout << std::endl;

		try
		{
			sp.addNumber(42);
			sp.addNumber(42);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			Span sp(0);
			sp.longestSpan();
			sp.shortestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
}