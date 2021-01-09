/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 22:14:10 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/09 11:31:08 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PBOOK_HPP
# define PBOOK_HPP

# include "ContactPbook.hpp"
# include <iostream>

class Pbook
{
private:
    static const int PBOOK_SIZE = 8;
    ContactPbook phoneBook[PBOOK_SIZE];
    int amount_elem;
    std::string print_ten(std::string elem_col);
    void get_contact(void);
public:
    Pbook();
    bool add_elem(void);
    void search_elem(void);
};

#endif