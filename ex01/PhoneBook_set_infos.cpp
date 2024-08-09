/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_set_infos.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:50:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/09 16:12:50 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	PhoneBook::ft_add_first_name(void)
{
	std::string	first_n;

	std::cout << " First name:\t\t";
	if (!std::getline(std::cin, first_n))
		return std::string();
	while (!ft_is_alpha(first_n))
	{
		std::cout << " Please enter a correct first name (can't be empty): ";
		if (!std::getline(std::cin, first_n))
			return std::string();
	}
	return (first_n);
}

std::string	PhoneBook::ft_add_last_name(void)
{
	std::string	last_n;

	std::cout << " Last name:\t\t";
	if (!std::getline(std::cin, last_n))
		return std::string();
	while (!ft_is_alpha(last_n))
	{
		std::cout << " Please enter a correct last name (can't be empty): ";
		if (!std::getline(std::cin, last_n))
			return std::string();
	}
	return (last_n);
}

std::string	PhoneBook::ft_add_nickname(void)
{
	std::string	nickname;

	std::cout << " Nickname:\t\t";
	if (!std::getline(std::cin, nickname))
		return std::string();
	while (!ft_is_alpha(nickname))
	{
		std::cout << " Please enter a correct nickname (can't be empty): ";
		if (!std::getline(std::cin, nickname))
			return std::string();
	}
	return (nickname);
}

std::string	PhoneBook::ft_add_phone(void)
{
	std::string	phone;

	std::cout << " Phone:\t\t\t";
	if (!std::getline(std::cin, phone))
		return std::string();
	while (!ft_is_digit(phone))
	{
		std::cout << " Please enter a correct phone number (can't be empty): ";
		if (!std::getline(std::cin, phone))
			return std::string();
	}
	return (phone);
}

std::string	PhoneBook::ft_add_secret()
{
	std::string	secret;

	std::cout << " Darkest secret:\t";
	if (!std::getline(std::cin, secret))
		return std::string();
	while (!ft_is_alpha(secret))
	{
		std::cout << " Please enter a correct secret (can't be empty): ";
		if (!std::getline(std::cin, secret))
			return std::string();
	}
	return (secret);
}
