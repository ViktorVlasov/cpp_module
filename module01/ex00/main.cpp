/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 21:12:56 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/09 22:28:54 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap()
{
	Pony *test_pony = new Pony("ponyOnTheHeap", "test_color1", "Igogogogo from heap");
	
	std::cout << "Pony name: " << test_pony->getName() << std::endl;
	test_pony->makeSound();
	delete test_pony;
}

void ponyOnTheStack()
{
	Pony test_pony("ponyOnTheStack", "test_color2", "Ogogogogi from stack");
	
	std::cout << "Pony name: " << test_pony.getName() << std::endl;
	test_pony.makeSound();
}

int main(int argc, char const *argv[])
{
	std::cout << "===== Pony on the heap =====" << std::endl;
	ponyOnTheHeap();
	std::cout << "===== Pony on the stack =====" << std::endl;
	ponyOnTheStack();
	return 0;
}
