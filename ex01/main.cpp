/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:50:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/06 20:25:53 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void) 
{
	this->_index = 0;
}

PhoneBook::~PhoneBook(void) {}

int	main(int argc, char **argv)
{
	PhoneBook	phonebook;

	(void)argv;
	if (argc != 1)
		return (0);
	std::cout << "Welcome to the 80s and their unbelievable technology!\n\n";
	std::cout << "Enter 'ADD' to save a new contact ";
	std::cout << "or 'SEARCH' to display a specific one.\n";
	std::cout << "If you want to quit, please enter 'EXIT'\n";
	phonebook.ft_print_instructions();
	return (0);
}
