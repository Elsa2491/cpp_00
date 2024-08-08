/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:50:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/08 20:21:05 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
	this->_contact[this->_contact_nb].ft_set_contact(this->_contact_nb, first_n, last_n, nickname, phone, secret);
	this->_contact_nb += 1;
	std::cout << "\nEnter 'ADD' to save a new one or 'SEARCH' to display a specific one.\n";
	std::cout << "If you want to quit, please enter 'EXIT'\n";
	return ;
}

Contact	PhoneBook::ft_retrieve_contact(int i)
{

	return  (this->_contact[i]);
}

std::string ft_truncate(std::string str)
{
	if (!str.length())
		return std::string();
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::ft_print_contact(void)
{
	std::cout << CORNER_TL;
	for (int col = 0; col < 4; ++col)
	{
		for (int width = 0; width < 10; width++)
			std::cout << HORIZONTAL;
		if (col < 3)
			std::cout << T_TOP;
	}
	std::cout << CORNER_TR << std::endl;
	for (int height = 0; height < this->_contact_nb; ++height) {
		std::cout << VERTICAL;
		std::cout << std::setw(10) << height + 1 << VERTICAL;
		std::cout << std::setw(10) << ft_truncate(this->_contact[height].get_first_name()) << VERTICAL;
		std::cout << std::setw(10) << ft_truncate(this->_contact[height].get_last_name()) << VERTICAL;
		std::cout << std::setw(10) << ft_truncate(this->_contact[height].get_nickname()) << VERTICAL;
		std::cout << std::endl;
		if (height < this->_contact_nb - 1) {
			std::cout << T_LEFT;
			for (int j = 0; j < 4; ++j) {
				for (int k = 0; k < 10; k++)
					std::cout << HORIZONTAL;
				if (j < 4 - 1)
					std::cout << CROSS;
			}
			std::cout << T_RIGHT << std::endl;
		}
	}
	std::cout << CORNER_BL;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 10; j++)
			std::cout << HORIZONTAL;
		if (i < 3)
			std::cout << T_BOTTOM;
	}
	std::cout << CORNER_BR << std::endl;
	std::cout << "Enter 'ADD' to save a new one or the index to display a specific one.\n";
	std::cout << "If you want to quit, please enter 'EXIT'\n";
	// cherche l'index
}

void	PhoneBook::ft_print_instructions(void)
{
	while (std::getline(std::cin, this->_input))
	{
		if (!this->_input.compare("ADD"))
			ft_add_contact();
		else if (!this->_input.compare("SEARCH"))
		{
			if (!this->_contact_nb)
			{
				std::cout << "You don't have any contact yet.\n";
				std::cout << "Please enter 'ADD' to save a new one before searching, ";
				std::cout << "or 'EXIT' if you want to quit.\n";
			}
			else
				ft_print_contact();
		}
		else if (!this->_input.compare("EXIT"))
		{
			std::cout << "What a pity that you already want to leave us!" << std::endl;
			return ;
		}
		else
			std::cout << "Please, enter a correct command: ADD, SEARCH or EXIT\n";
	}
}
