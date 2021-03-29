/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 01:06:09 by rbraavos          #+#    #+#             */
/*   Updated: 2021/03/26 20:13:04 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome 
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n; 
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) 
{
	o << rhs.get();
	return o;
}

int main()
{
	int test1[5] = { 21, 21, 21, 21, 21 };
	char test2[5] = { 'a', 'b', 'c', 'd', 'e' };
	float test3[5] = { 0.01f, 1.02f, 2.03f, 3.04f, 4.05f };
	double test4[5] = { 0.123, 1.456, 2.789, 3.1011, 4.1213 };
	std::string test5[5] = { "Hello", "Bonjour", "Hola", "Shalom", "Guten Tag" };
	
	std::cout << "========================TEST 1: int  ========================\n";
	iter(test1, 5, &print_elem);
	std::cout << std::endl;

	std::cout << "========================TEST 2: char  ========================\n";
	iter(test2, 5, &print_elem);
	std::cout << std::endl;

	std::cout << "========================TEST 3: float  ========================\n";
	iter(test3, 5, &print_elem);
	std::cout << std::endl;

	std::cout << "========================TEST 4: double  ========================\n";
	iter(test4, 5, &print_elem);
	std::cout << std::endl;

	std::cout << "========================TEST 5: string  ========================\n";
	iter(test5, 5, &print_elem);
	std::cout << std::endl;
	
	std::cout << "========================Checklist========================\n";
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	
	iter( tab, 5, print_elem );
	iter( tab2, 5, print_elem );
	
	return 0;
}

// int     main(void)
// {
//     // int intA[4] = { 0, 1, 2, 3};
// 	// iter(intA, 4, &stuff); std::cout << std::endl;

// 	// float floatA[4] = { 0.1, 1.2, 2.3, 3.4};
// 	// iter(floatA, 4, &stuff); std::cout << std::endl;

// 	// double doubleA[4] = { 0.12, 1.23, 2.34, 3.45};
// 	// iter(doubleA, 4, &stuff); std::cout << std::endl;

// 	// std::string stringA[4] = { "lol", "lul", "kek", "kok"};
// 	// iter(stringA, 4, &stuff); std::cout << std::endl;
// 	// iter(stringA, 2, &stuff); std::cout << std::endl;
// 	// iter(stringA, 0, &stuff); std::cout << std::endl;

// 	return (0);
// }
