/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 15:52:32 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/29 16:01:51 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

int main(void)
{
    void* raw = serialize();
	Data* data = deserialize(raw);
    std::cout << "=========Data after using deserialize func=========\n" \
		<< data->s1 << std::endl\
		<< data->n << std::endl\
		<< data->s2 << std::endl;

	delete data;
    return 0;
}
