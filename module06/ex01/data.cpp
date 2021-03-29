/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 20:47:22 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/29 16:01:45 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

void *serialize(void)
{
	Data *data = new Data();
	data->s1 = "";
	data->s2 = "";
	
	std::string alphabet = "0123456789" \
		"abcdefghijklmopqrstuvxyz" \
		"ABCDEFGHIJKLMOPQRSTUVXYZ";
	
	srand(time(NULL));
	for (size_t i = 0; i < 8; i++)
	{
		data->s1 += alphabet[rand() % alphabet.length() - 1];
		data->s2 += alphabet[rand() % alphabet.length() - 1];
	}
	data->n = rand();
	
	std::cout << "=========Initial data before using serialize func=========\n" \
		<< data->s1 << std::endl\
		<< data->n << std::endl\
		<< data->s2 << std::endl;
	return (reinterpret_cast<void *>(data));
}

Data *deserialize(void *raw)
{
	Data *data = reinterpret_cast<Data *>(raw);
	return (data);
}