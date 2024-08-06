/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:46:16 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/06 14:13:09 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include "Contact.hpp"

#define NB_CONTACT 8

class	PhoneBook {
	Contact _contact[NB_CONTACT];
	std::string	input;
	void	ft_print_contacts(PhoneBook *phonebook);
	void	ft_add_contact(void);
	std::string	ft_add_first_name(void);
	std::string	ft_add_last_name(void);
	std::string	ft_add_nickname(void);
	std::string	ft_add_phone(void);
	std::string	ft_add_secret(void);
	Contact	ft_get_contact(int i) { return _contact[i]; }
	int	_index;

public:
	PhoneBook(void) { this->_index = 0; }
	~PhoneBook(void) {}

	void	ft_print_instructions(void);
} phonebook;

#endif
