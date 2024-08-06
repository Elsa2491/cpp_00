/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:22:25 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/06 19:32:58 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone;
	std::string	_secret;

public:
	Contact(void);
	~Contact(void);

	void	ft_set_contact(std::string first, std::string last, std::string nickname,
				std::string phone, std::string secret);
	void	ft_print_contact(void);
};

#endif
