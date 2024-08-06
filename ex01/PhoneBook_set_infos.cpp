/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_set_infos.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:50:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/06 21:02:04 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	ft_is_alpha(std::string str)
{
	int	i;

	i = 0;
	if (!str.length() || (str[0] == '-' && str.length() == 1))
		return (0);
	while (str[i])
	{
		if (!isalpha(str[i]))
		{
			if (str[i] != '-')
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
	if (!str.length())
		return (0);
	while (str[i])
	{
		if (!isdigit(str[i])) //  || str.length() != 10)
			return (0);
		i += 1;
	}
	return (1);
}

std::string	PhoneBook::ft_add_first_name(void)
{
	std::string	first_n;

	std::cout << " First name:\t\t";
	if (!std::getline(std::cin, first_n))
		return std::string();
	while (!ft_is_alpha(first_n))
	{
		std::cout << " Please enter a correct first name: ";
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
		std::cout << " Please enter a correct last name: ";
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
		std::cout << " Please enter a correct phone number: ";
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
	return (secret);
}
/*
void	PhoneBook::ft_add_contact(void)
{
	Contact	contact;
	std::string	first_n;
	std::string	last_n;
	std::string	nickname;
	std::string	phone;
	std::string	secret;

	first_n = ft_add_first_name();
	if (!first_n.size())
		return ;
	last_n = ft_add_last_name();
	if (!last_n.size())
		return ;
	nickname = ft_add_nickname();
	phone = ft_add_phone();
	if (!phone.size())
		return ;
	secret = ft_add_secret();
	this->_index += 1;
	this->_contact[this->_index].ft_set_contact(first_n, last_n, nickname, phone, secret);
//	this->_index += 1;
	// if (this->_index == 1)
	// 	std::cout << "\nYou have " << this->_index << " contact"  << std::endl;
	// else
	// 	std::cout << "\nYou have " << this->_index << " contacts"  << std::endl;
	std::cout << "Enter 'ADD' to save a new one or 'SEARCH' to display a specific one.\n";
	std::cout << "If you want to quit, please enter 'EXIT'\n";
	return ;
}


Contact	PhoneBook::ft_retrieve_contact(int i)
{
	return  this->_contact[i];
}

void	PhoneBook::ft_print_instructions(void)
{
	while (std::getline(std::cin, this->input)) // && this->_index < 8)
	{
		if (!this->input.compare("ADD"))
			ft_add_contact();
		else if (!this->input.compare("SEARCH"))
		{
			if (!this->_index)
			{
				std::cout << "You don't have any contact yet.\n";
				std::cout << "Please enter 'ADD' to save a new one before searching, or 'EXIT' if you want to quit.\n";
			}
			else
			{
				std::cout << "You want to " << this->input << std::endl;
				ft_retrieve_contact(this->_index).ft_print_contact();
			}
		}
		else if (!this->input.compare("EXIT"))
		{
			std::cout << "What a pity that you already want to leave us!" << std::endl;
			return ;
		}
		else
			std::cout << "Please, enter a correct command: ADD, SEARCH or EXIT\n";
	}
}

int	main(int argc, char **argv)
{
	PhoneBook phonebook;

	(void)argv;
	if (argc != 1)
		return (0);
	std::cout << "Welcome to the 80s and their unbelievable technology!\n\n";
	std::cout << "Enter 'ADD' to save a new contact or 'SEARCH' to display a specific one.\n";
	std::cout << "If you want to quit, please enter 'EXIT'\n";
	phonebook.ft_print_instructions();
	return (0);
}
*/
