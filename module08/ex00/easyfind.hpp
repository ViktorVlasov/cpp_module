/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 20:17:35 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/27 20:58:07 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <iterator>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator found = std::find(container.begin(), container.end(), value);
	if (found != container.end())
	    return(found);
    throw std::logic_error("Element not found!");
}