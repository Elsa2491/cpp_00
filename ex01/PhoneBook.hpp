/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:46:16 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/08 17:37:44 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <iomanip>
#include "Contact.hpp"

#define NB_CONTACT 8

class	PhoneBook
{
	Contact 	_contact[NB_CONTACT];
	int		_contact_nb;
	int		_index;
	std::string	_input;
	std::string	ft_add_first_name(void);
	std::string	ft_add_last_name(void);
	std::string	ft_add_nickname(void);
	std::string	ft_add_phone(void);
	std::string	ft_add_secret(void);
	void	ft_add_contact(void);
	void	ft_print_contact(void);

public:
	PhoneBook(void);
	~PhoneBook(void);

	void	ft_print_instructions(void);
	Contact ft_retrieve_contact(int i);
//	int		_contact_nb; //static
//	int		index;
};

#endif
