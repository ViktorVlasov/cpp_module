/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 22:14:13 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/08 23:44:57 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pbook.hpp"

Pbook::Pbook()
{
    amount_elem = 0;
}

bool Pbook::add_elem()
{
    std::string first_name, last_name, nickname, login, postal_address,
                email_address, phone_number, birthday_date, favorite_meal,
                underwear_color, darkest_secret;


    if (amount_elem < this->PBOOK_SIZE)
    {
        std::cout << "Enter first name: " << std::endl;
        getline(std::cin, first_name);
        std::cout << "Enter last name: " << std::endl;
        getline(std::cin, last_name);
        std::cout << "Enter nickname: " << std::endl;
        getline(std::cin, nickname);
        std::cout << "Enter login: " << std::endl;
        getline(std::cin, login);
        std::cout << "Enter postal address: " << std::endl;
        getline(std::cin, postal_address);
        std::cout << "Enter email address: " << std::endl;
        getline(std::cin, email_address);
        std::cout << "Enter phone number: " << std::endl;
        getline(std::cin, phone_number);
        std::cout << "Enter birthday date: " << std::endl;
        getline(std::cin, birthday_date);
        std::cout << "Enter favorite meal: " << std::endl;
        getline(std::cin, favorite_meal);
        std::cout << "Enter underwear color: " << std::endl;
        getline(std::cin, underwear_color);
        std::cout << "Enter darkest secret: " << std::endl;
        getline(std::cin, darkest_secret);

        this->phoneBook[amount_elem] = ContactPbook(first_name, 
                                                last_name, 
                                                nickname,
                                                login,
                                                postal_address,
                                                email_address,
                                                phone_number,
                                                birthday_date,
                                                favorite_meal,
                                                underwear_color,
                                                darkest_secret
                                                );
        amount_elem++;
    }
    else 
    {
        std::cout << "Phonebook is full!" << std::endl;
        return (false);
    }
    return (true);
}

bool Pbook::search_elem()
{
    if (this->amount_elem == 0)
    {
        std::cout << "Phone book is empty!";
        return (false);
    }
    else
    {
        std::cout << std::setw(10) << "Index" << "|";
        std::cout << std::setw(10) << "First Name" << "|";
        std::cout << std::setw(10) << "Last Name" << "|";
        std::cout << std::setw(10) << "Nickname" << std::endl;

        for (int i = 0; i < this->amount_elem; i++)
        {
            std::cout << std::setw(10) << i << "|";
            std::cout << std::setw(10) << this->phoneBook[i].getFirstName() << "|";
            std::cout << std::setw(10) << this->phoneBook[i].getLastName() << "|";
            std::cout << std::setw(10) << this->phoneBook[i].getNickname() << std::endl;
        }
    }
}