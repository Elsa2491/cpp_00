/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:13:34 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/06 20:17:54 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void	Contact::ft_set_contact(int i, std::string first, std::string last, std::string nickname,
		std::string phone, std::string secret)
{
	this->_i = i;
	this->_first_name = first;
	this->_last_name = last;
	this->_nickname = nickname;
	this->_phone = phone;
	this->_secret = secret;
	return ;
}

void	Contact::ft_print_contact(void)
{
	int	i;

	i = 0;
	while (i < this->_i)
	{
		std::cout << this->_i << std::endl;
		std::cout << this->_first_name << std::endl;
		std::cout << this->_last_name << std::endl;
		std::cout << this->_nickname << std::endl;
		std::cout << this->_phone << std::endl;
		std::cout << this->_secret << std::endl;
		i += 1;
	}
	std::cout << "Enter 'ADD' to save a new one or the index to display a specific one.\n";
	std::cout << "If you want to quit, please enter 'EXIT'\n";
}
