/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:46:16 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/09 21:21:43 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <cctype>
# include <iomanip>
# include <stdlib.h>
# include "Contact.hpp"

# define NB_CONTACT 	8
# define HORIZONTAL	"\u2500"
# define VERTICAL	"\u2502"
# define CORNER_TL	"\u250c"
# define CORNER_TR	"\u2510"
# define CORNER_BL	"\u2514"
# define CORNER_BR	"\u2518"
# define CROSS		"\u253c"
# define T_TOP		"\u252c"
# define T_BOTTOM	"\u2534"
# define T_LEFT		"\u251c"
# define T_RIGHT	"\u2524"

int	ft_is_alpha(std::string str);
int	ft_is_digit(std::string str);
int	ft_is_print(std::string str);
std::string ft_truncate(std::string str);

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
	void	ft_select_contact(void);
	void	ft_is_max_reached(void);

public:
	PhoneBook(void);
	~PhoneBook(void);

	void	ft_print_instructions(void);
	Contact ft_retrieve_contact(int i);
};

#endif
