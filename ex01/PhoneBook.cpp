/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:50:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/04 20:02:13 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <cctype>
PhoneBook::PhoneBook(void)
{
	this->_index = 0;
}

PhoneBook::~PhoneBook(void) {}

int	ft_is_alpha(std::string str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i])
	{
		if (!isalpha(str[i]))
		{
			if (str[i] == '-')
				i += 1;
			else
				return (0);
		}
		i += 1;
	}
	return (1);
}

int	ft_is_digit(std::string str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i])
	{
		if (!isdigit(str[i]) || str.length() != 10)
			return (0);
		i += 1;
	}
	return (1);
}

void	PhoneBook::ft_add(PhoneBook *phonebook)
{
	Contact	contact;
	std::string	first_n;
	std::string	last_n;
	std::string	nickname;
	std::string	phone;
	std::string	secret;

	(void)phonebook;
	std::cout << " First name:\t\t";
	std::getline(std::cin, first_n);
	while (!ft_is_alpha(first_n))
	{
		std::cout << " Please enter a correct first name: ";
		if (!std::getline(std::cin, first_n))
			return ;
	}
	std::cout << " Last name:\t\t";
	std::getline(std::cin, last_n);
	while (!ft_is_alpha(last_n))
	{
		std::cout << " Please enter a correct last name: ";
		if (!std::getline(std::cin, last_n))
			return ;
	}
	std::cout << " Nickname:\t\t";
	std::getline(std::cin, nickname);
	std::cout << " Phone:\t\t\t";
	std::getline(std::cin, phone);
	while (!ft_is_digit(phone))
	{
		std::cout << " Please enter a correct phone number: ";
		if (!std::getline(std::cin, phone))
			return ;
	}
	std::cout << " Darkest secret:\t";
	std::getline(std::cin, secret);
	contact.ft_set_contact(first_n, last_n, nickname, phone, secret);
	this->_index += 1;
	if (this->_index == 1)
		std::cout << "\nYou have " << this->_index << " contact"  << std::endl;
	else
		std::cout << "\nYou have " << this->_index << " contacts"  << std::endl;
	return ;
}

void	PhoneBook::ft_print(PhoneBook *phonebook)
{
	int	add;
	int	search;
	int	exit;
	std::cout << "Welcome to the 80s and their unbelievable technology!\n";
	std::cout << "Enter 'ADD' to save a new contact or 'SEARCH' to display a specific one.\n";
	std::cout << "If you want to quit, please enter 'EXIT'\n";
	while (std::getline(std::cin, this->input) && this->_index < 8)
	{
		add = this->input.compare("ADD");
		search = this->input.compare("SEARCH");
		exit = this->input.compare("EXIT");
		if (!add)
			ft_add(phonebook);
		else if (!search)
		{
			if (!this->_index)
			{
				std::cout << "You don't have any contact yet.\n";
				std::cout << "Please enter 'ADD' to save a new one before searching, or 'EXIT' if you want to quit.\n";
			}
			else
				std::cout << "You want to " << this->input << std::endl;
		}
		else if (!exit)
		{
			std::cout << "What a pity that you already want to leave us!" << std::endl;
			return ;
		}
		else
			std::cout << "Please, enter a correct command:\tADD, SEARCH or EXIT\n";
	}
}

int	main(void)
{
	PhoneBook	phonebook;

	phonebook.ft_print(&phonebook);
	return (0);
}
