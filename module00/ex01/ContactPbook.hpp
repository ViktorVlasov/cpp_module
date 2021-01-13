/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactPbook.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 21:03:45 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/13 10:00:53 by efumiko          ###   ########.fr       */
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
	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickname(void) const;
	std::string getLogin(void) const;
	std::string getPostalAddress(void) const;
	std::string getEmailAddress(void) const;
	std::string getPhoneNumber(void) const;
	std::string getBirthdayDate(void) const;
	std::string getFavoriteMeal(void) const;
	std::string getUnderwearColor(void) const;
	std::string getDarkestSecret(void) const;
};

#endif
