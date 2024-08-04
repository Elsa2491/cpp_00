/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:46:16 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/04 18:16:19 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cstring>
#include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
//		char	*input;
		std::string	input;
		//void	ft_print(void);
		void	ft_print(PhoneBook *phonebook);
		void	ft_add(PhoneBook *phonebook);
	
	private:
		Contact _contact[8];
		int	_index;
};

#endif
