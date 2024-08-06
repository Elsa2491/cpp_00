/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:46:16 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/06 21:23:12 by eltouma          ###   ########.fr       */
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

class	PhoneBook
{
	Contact _contact[NB_CONTACT];
	std::string	input;
	//void	ft_print_contact();
	void	ft_add_contact(void);
	//void	ft_add_contact(PhoneBook *phonebook);
	std::string	ft_add_first_name(void);
	std::string	ft_add_last_name(void);
	std::string	ft_add_nickname(void);
	std::string	ft_add_phone(void);
	std::string	ft_add_secret(void);
	int	_index;

public:
	PhoneBook(void);
	~PhoneBook(void);

//	void	ft_print_instructions(PhoneBook *phonebook);
	void	ft_print_instructions(void);
	Contact ft_retrieve_contact(int i);
	//Contact ft_print_contact(PhoneBook *phonebook);
	Contact ft_print_contact(Contact *contact);
};

#endif
