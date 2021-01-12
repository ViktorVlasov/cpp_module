/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 21:03:45 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/08 22:10:03 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iomanip>
#include <iostream>

class ContactPbook
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
public:
	ContactPbook();
	ContactPbook(std::string first_name,
				std::string last_name,
				std::string nickname,
				std::string login,
				std::string postal_address,
				std::string email_address,
				std::string phone_number,
				std::string birthday_date,
				std::string favorite_meal,
				std::string underwear_color,
				std::string darkest_secret);
	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickname(void);
	std::string getLogin(void);
	std::string getPostalAddress(void);
	std::string getEmailAddress(void);
	std::string getPhoneNumber(void);
	std::string getBirthdayDate(void);
	std::string getFavoriteMeal(void);
	std::string getUnderwearColor(void);
	std::string getDarkestSecret(void);
};

#endif
