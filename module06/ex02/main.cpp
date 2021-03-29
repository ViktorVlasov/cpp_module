/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:07:57 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/29 21:39:23 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

Base *generate(void)
{
    int i = rand() % 3;
    if (i == 0)
	{
		std::cout << "A was generated." << std::endl;
        return (new A);
	}
    if (i == 1)
	{
		std::cout << "B was generated." << std::endl;
        return (new B);
	}
	std::cout << "C was generated." << std::endl;
    return (new C);
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}

int main(void)
{
	srand(time(NULL));
	Base *check = generate();
	std::cout << "========identify_from_pointer========" << std::endl;
	identify_from_pointer(check);
	std::cout << "========identify_from_reference========" << std::endl;
	identify_from_reference(*check);
	delete check;
	return (0);
}