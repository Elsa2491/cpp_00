/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:50:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/09 18:02:34 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void) : _contact_nb(0), _index(0) 
{
}

PhoneBook::~PhoneBook(void) {}

int	main(int argc, char **argv)
{
	PhoneBook	phonebook;

	(void)argv;
	if (argc != 1)
		return (0);
	std::cout << "\nWelcome to the 80s and their unbelievable technology!\n";
	std::cout << "Enter 'ADD' to save a new contact. ";
	std::cout << "If you want to quit, please enter 'EXIT'\n";
	phonebook.ft_print_instructions();
	return (0);
}
