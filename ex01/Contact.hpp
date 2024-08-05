/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:22:25 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/05 19:41:39 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
public:
	Contact(void);
	~Contact(void);

	void	ft_set_contact(std::string first, std::string last, std::string nickname,
				std::string phone, std::string secret);
	// void	ft_get_contact(std::string first, std::string last, std::string nickname,
	//			std::string phone, std::string secret);

private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone;
	std::string	_secret;
};

#endif
