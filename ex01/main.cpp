/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 20:31:01 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/08 23:04:25 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Pbook.hpp>
#include <ContactPbook.hpp>

int main(int argc, char *argv[])
{
	std::string command;
	Pbook pbook;
	
	while (true)
	{
		std::cout << "Enter command: ";
		std::cin >> command;
		if (command == "EXIT")
		{
			std::cout << "Bye!\n";
			exit(0);
		}
		else if (command == "ADD")
			pbook.add_elem();
		else if (command == "SEARCH")
			pbook.search_elem();
		else
		{
			std::cout << "----Command not found.----\n" 
			<< "Please, enter one of the following commands: ADD, SEARCH, EXIT" << std::endl;
		}
	}
	return (0);
}