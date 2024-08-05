/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:13:34 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/05 20:20:33 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void	Contact::ft_set_contact(std::string first, std::string last, std::string nickname,
				std::string phone, std::string secret)
{
	this->_first_name = first;
	this->_last_name = last;
	this->_nickname = nickname;
	this->_phone = phone;
	this->_secret = secret;
/*
	std::cout << std::endl;
	std::cout << "ft_set_contact" << std::endl;
	std::cout << _first_name << std::endl;
	std::cout << _last_name << std::endl;
	std::cout << _nickname << std::endl;
	std::cout << _phone << std::endl;
	std::cout << _secret << std::endl;
*/
	return ;
}

/*
void	Contact::ft_get_contact(std::string first, std::string last, std::string nickname,
				std::string phone, std::string secret)
{
	(void)first;
	(void)last;
	(void)nickname;
	(void)phone;
	(void)secret;
//	std::cout << "ft_set_contact" << std::endl;
	std::cout << _first_name << std::endl;
	std::cout << _last_name << std::endl;
	std::cout << _nickname << std::endl;
	std::cout << _phone << std::endl;
	std::cout << _secret << std::endl;
}
*/
