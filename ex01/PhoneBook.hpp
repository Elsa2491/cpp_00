/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:46:16 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/05 20:19:23 by eltouma          ###   ########.fr       */
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
		std::string	input;
		void	ft_print_contacts(PhoneBook *phonebook);
		void	ft_add_contact(void);
		std::string	ft_add_first_name(void);
		std::string	ft_add_last_name(void);
		std::string	ft_add_nickname(void);
		std::string	ft_add_phone(void);
		std::string	ft_add_secret(void);
		Contact	ft_get_contact(int i);
		Contact _contact[NB_CONTACT];
		int	_index;

public:
		PhoneBook(void);
		~PhoneBook(void);

		void	ft_print_instructions(void);
};

#endif
