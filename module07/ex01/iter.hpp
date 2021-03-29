/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 01:06:15 by rbraavos          #+#    #+#             */
/*   Updated: 2021/03/26 20:00:59 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template<typename T> 
void iter(T *arr, size_t len, void (*func)(const T &elem))
{
    for (size_t i = 0; i < len; i++)
        func(arr[i]);
}

template<typename T> 
void print_elem(const T &x)
{
    std::cout << x << std::endl;
}

#endif
