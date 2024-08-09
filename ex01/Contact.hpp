/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:22:25 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/09 13:22:40 by eltouma          ###   ########.fr       */
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
	int		_i;

public:
	Contact(void);
	~Contact(void);

	void	ft_set_contact(int i, std::string first, std::string last, std::string nickname,
	//void	ft_set_contact(std::string first, std::string last, std::string nickname,
				std::string phone, std::string secret); // essayer de mettre const pour voir
	int	ft_get_contact_nb(void) const;
	std::string	ft_get_first_name(void) const;
	std::string	ft_get_last_name(void) const;
	std::string	ft_get_nickname(void) const;
	std::string	ft_get_phone(void) const;
	std::string	ft_get_secret(void) const;
};

#endif
