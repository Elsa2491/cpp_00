/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:50:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/02 18:24:11 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

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

int	main()
{
	PhoneBook directory;

	directory.add();

	return (0);
}
