/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:50:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/03 21:57:11 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

/*
void PhoneBook::add()
{
	int	i;

	for (i = 0; i < 3; i++)
	{
		std::cout << "First_name: ";
		std::getline(std::cin, this->first_name);
		std::cout << "Your name is " << this->first_name << std::endl;
		this->tab[i] = this->first_name;	
	}
}
*/

void	PhoneBook::ft_print()
{
//	this->input = new char[100];
	std::cout << "Enter 'add' to add a new contact or 'search' to search for one." << std::endl;
	std::cout << "If you want to leave, enter 'exit'" << std::endl;
	std::getline(std::cin, this->input);
//	std::cin.getline(this->input, 100);
	std::cout << "You want to " << this->input << std::endl;
//	delete[] this->input;
	return ;
}

int	main(void)
{
	PhoneBook	phonebook;
	Contact		contact;

	phonebook.ft_print();
//	directory.add();

	return (0);
}
