/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:13:34 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/10 16:02:50 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

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
	return ;
}

std::string	Contact::ft_get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::ft_get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Contact::ft_get_nickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::ft_get_phone(void) const
{
	return (this->_phone);
}

std::string	Contact::ft_get_secret(void) const
{
	return (this->_secret);
}
