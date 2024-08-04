/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:50:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/04 17:41:20 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void) {}

PhoneBook::~PhoneBook(void) {}

void	PhoneBook::ft_print()
{
	int	add;
	int	search;
	int	exit;
	std::cout << "Welcome to the 80s and their unbelievable technology!\n";
	std::cout << "Enter 'ADD' to save a new contact or 'SEARCH' to display a specific one.\n";
	std::cout << "If you want to leave, please enter 'EXIT'\n";
	while (std::getline(std::cin, this->input))
	{
		add = this->input.compare("ADD");
		search = this->input.compare("SEARCH");
		exit = this->input.compare("EXIT");
		if (!add)
			std::cout << "You want to " << this->input << std::endl;
		if (!search)
			std::cout << "You want to " << this->input << std::endl;
		if (!exit)
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
	Contact		contact;

	phonebook.ft_print();
	return (0);
}
