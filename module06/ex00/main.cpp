/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:44:32 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/29 16:30:56 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

int main(int argc, char const **argv)
{
	if (argc != 2)
		std::cout << "Error: Wrong amount of args!\n";
	else
	{
		Cast p(argv[1]);
		std::cout << p;
	}
	return (0);
}
