/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactPbook.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 21:03:47 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/13 10:01:26 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactPbook.hpp"

ContactPbook::ContactPbook()
{
	
}

ContactPbook::ContactPbook(std::string first_name,
				std::string last_name,
				std::string nickname,
				std::string login,
				std::string postal_address,
				std::string email_address,
				std::string phone_number,
				std::string birthday_date,
				std::string favorite_meal,
				std::string underwear_color,
				std::string darkest_secret) 
				: first_name(first_name),
				nickname(nickname),
				login(login),
				postal_address(postal_address),
				email_address(email_address),
				phone_number(phone_number),
				birthday_date(birthday_date),
				favorite_meal(favorite_meal),
				underwear_color(underwear_color),
				darkest_secret(darkest_secret)
{
}

std::string ContactPbook::getFirstName(void) const
{
	return (first_name);
}

std::string ContactPbook::getLastName(void) const
{
	return (last_name);
}

std::string ContactPbook::getNickname(void) const
{
	return (nickname);    
}

std::string ContactPbook::getLogin(void) const
{
	return (login);
}

std::string ContactPbook::getPostalAddress(void) const
{
	return (postal_address);
}

std::string ContactPbook::getEmailAddress(void) const
{
	return (email_address);
}

std::string ContactPbook::getPhoneNumber(void) const 
{
	return (phone_number);
}

std::string ContactPbook::getBirthdayDate(void) const  
{
	return (birthday_date);
}

std::string ContactPbook::getFavoriteMeal(void) const
{
	return (favorite_meal);
}

std::string ContactPbook::getUnderwearColor(void) const
{
	return (underwear_color);
}

std::string ContactPbook::getDarkestSecret(void) const
{
	return (darkest_secret);
}
