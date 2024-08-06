/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:50:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/06 21:24:41 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

/*
PhoneBook::PhoneBook(void) 
{
	this->_index = 0;
}

PhoneBook::~PhoneBook(void) {}
*/
void	PhoneBook::ft_add_contact(void)
{
	Contact	contact;
	std::string	first_n;
	std::string	last_n;
	std::string	nickname;
	std::string	phone;
	std::string	secret;
	int	i;

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
	i = this->_index;
	this->_contact[i].ft_set_contact(i, first_n, last_n, nickname, phone, secret);
//	this->_index += 1;
	// if (this->_index == 1)
	// 	std::cout << "\nYou have " << this->_index << " contact"  << std::endl;
	// else
	// 	std::cout << "\nYou have " << this->_index << " contacts"  << std::endl;
	std::cout << "\nEnter 'ADD' to save a new one or 'SEARCH' to display a specific one.\n";
	std::cout << "If you want to quit, please enter 'EXIT'\n";
	return ;
}


Contact	PhoneBook::ft_retrieve_contact(int i)
{
	return  (this->_contact[i]);
}

void	PhoneBook::ft_print_instructions(void)
{
	int	i;
	while (std::getline(std::cin, this->input))
	{
		if (!this->input.compare("ADD"))
			ft_add_contact();
		else if (!this->input.compare("SEARCH"))
		{
			if (!this->_index)
			{
				std::cout << "You don't have any contact yet.\n";
				std::cout << "Please enter 'ADD' to save a new one before searching, ";
				std::cout << "or 'EXIT' if you want to quit.\n";
			}
			else
			{
				for (i = 1; i <= this->_index; i++)
					ft_retrieve_contact(i).ft_print_contact();
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
