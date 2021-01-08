/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 22:14:10 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/08 22:38:17 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PBOOK_HPP
# define PBOOK_HPP

# include "ContactPbook.hpp"
# #include <iostream>include <iostream>

class Pbook
{
private:
    static const int PBOOK_SIZE = 8;
    ContactPbook phoneBook[PBOOK_SIZE];
    int amount_elem;
public:
    Pbook();
    bool add_elem();
    bool search_elem();
};

#endif