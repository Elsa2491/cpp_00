/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:13:34 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/04 19:24:15 by eltouma          ###   ########.fr       */
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
	return ;
}
