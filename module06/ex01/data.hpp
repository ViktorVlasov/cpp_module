/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 20:46:30 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/29 21:32:02 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void *serialize(void);
Data *deserialize(void *raw);

#endif