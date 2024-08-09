/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:50:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/09 15:54:58 by eltouma          ###   ########.fr       */
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
	if (!first_n.length())
		return ;
	last_n = ft_add_last_name();
	if (!last_n.length())
		return ;
	nickname = ft_add_nickname();
	if (!nickname.length())
		return ;
	phone = ft_add_phone();
	if (!phone.length())
		return ;
	secret = ft_add_secret();
	if (!secret.length())
		return ;
	this->_contact[this->_contact_nb].ft_set_contact(this->_contact_nb, first_n, last_n, nickname, phone, secret);
	this->_contact_nb += 1;
	std::cout << "\nEnter 'ADD' to save a new one or 'SEARCH' to display a specific one.\n";
	std::cout << "If you want to quit, please enter 'EXIT'" << std::endl;
	return ;
}

Contact	PhoneBook::ft_retrieve_contact(int i)
{
	return  (this->_contact[i]);
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
				std::cout << "or 'EXIT' if you want to quit." << std::endl;
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
			std::cout << "Please, enter a correct command: ADD, SEARCH or EXIT" << std::endl;
	}
}
