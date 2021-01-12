/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 22:14:13 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/09 12:08:31 by efumiko          ###   ########.fr       */
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
        std::cout << "Enter first name: ";
        std::getline(std::cin, first_name);
        std::cout << "Enter last name: ";
        std::getline(std::cin, last_name);
        std::cout << "Enter nickname: ";
        std::getline(std::cin, nickname);
        std::cout << "Enter login: ";
        std::getline(std::cin, login);
        std::cout << "Enter postal address: ";
        std::getline(std::cin, postal_address);
        std::cout << "Enter email address: ";
        std::getline(std::cin, email_address);
        std::cout << "Enter phone number: ";
        std::getline(std::cin, phone_number);
        std::cout << "Enter birthday date: ";
        std::getline(std::cin, birthday_date);
        std::cout << "Enter favorite meal: ";
        std::getline(std::cin, favorite_meal);
        std::cout << "Enter underwear color: ";
        std::getline(std::cin, underwear_color);
        std::cout << "Enter darkest secret: ";
        std::getline(std::cin, darkest_secret);

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

std::string Pbook::print_ten(std::string elem_col)
{
    if (elem_col.length() > 10)
        return (elem_col.substr(0, 9) + ".");
    else
        return (elem_col);
}

void Pbook::get_contact(void)
{
    int index = -1;
    
    std::cout << "Enter index: ";
    std::cin >> index;
    if (std::cin.fail()) 
    {
        std::cin.clear();
        std::cin.ignore(32767,'\n');
        std::cout << "Invalid input!" << std::endl;
        return ;
    }
    if (index < this->amount_elem && index >= 0)
    {
        std::cout << "First name: " << this->phoneBook[index].getFirstName() << std::endl;
        std::cout << "Last name: " << this->phoneBook[index].getLastName() << std::endl;
        std::cout << "Nickname: " << this->phoneBook[index].getNickname() << std::endl;
        std::cout << "Login: " << this->phoneBook[index].getLogin() << std::endl;
        std::cout << "Postal address: " << this->phoneBook[index].getPostalAddress() << std::endl;
        std::cout << "Email address: " << this->phoneBook[index].getEmailAddress() << std::endl;
        std::cout << "Phone number: " << this->phoneBook[index].getPhoneNumber() << std::endl;
        std::cout << "Birthday date: " << this->phoneBook[index].getBirthdayDate() << std::endl;
        std::cout << "Favorite meal: " << this->phoneBook[index].getFavoriteMeal() << std::endl;
        std::cout << "Underwear color: " << this->phoneBook[index].getUnderwearColor() << std::endl;
        std::cout << "Darkest secret: " << this->phoneBook[index].getDarkestSecret() << std::endl;
    }
    else
    {
        std::cout << "This index does not exist!" << std::endl;
    }
}

void Pbook::search_elem()
{
    if (this->amount_elem == 0)
        std::cout << "Phone book is empty!" << std::endl; 
    else
    {
        std::cout << std::setw(10) << "Index" << "|";
        std::cout << std::setw(10) << "First Name" << "|";
        std::cout << std::setw(10) << "Last Name" << "|";
        std::cout << std::setw(10) << "Nickname" << std::endl;

        for (int i = 0; i < this->amount_elem; i++)
        {
            std::cout << std::setw(10) << i << "|";
            std::cout << std::setw(10) << print_ten(this->phoneBook[i].getFirstName()) << "|";
            std::cout << std::setw(10) << print_ten(this->phoneBook[i].getLastName()) << "|";
            std::cout << std::setw(10) << print_ten(this->phoneBook[i].getNickname()) << std::endl;
        }
    }
    get_contact();
}