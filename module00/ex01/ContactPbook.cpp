/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactPbook.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 21:03:47 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/08 22:13:04 by efumiko          ###   ########.fr       */
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
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->login = login;
	this->postal_address = postal_address;
	this->email_address = email_address;
	this->phone_number = phone_number;
	this->birthday_date = birthday_date;
	this->favorite_meal = favorite_meal;
	this->underwear_color = underwear_color;
	this->darkest_secret = darkest_secret;
}

std::string ContactPbook::getFirstName(void)
{
	return (first_name);
}

std::string ContactPbook::getLastName(void)
{
	return (last_name);
}

std::string ContactPbook::getNickname(void)
{
	return (nickname);    
}

std::string ContactPbook::getLogin(void)
{
	return (login);
}

std::string ContactPbook::getPostalAddress(void)
{
	return (postal_address);
}

std::string ContactPbook::getEmailAddress(void)
{
	return (email_address);
}

std::string ContactPbook::getPhoneNumber(void)
{
	return (phone_number);
}

std::string ContactPbook::getBirthdayDate(void)
{
	return (birthday_date);
}

std::string ContactPbook::getFavoriteMeal(void)
{
	return (favorite_meal);
}

std::string ContactPbook::getUnderwearColor(void)
{
	return (underwear_color);
}

std::string ContactPbook::getDarkestSecret(void)
{
	return (darkest_secret);
}
