/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:13:34 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/08 18:15:34 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

Contact::Contact(void) {}

Contact::~Contact(void) {}

void	Contact::ft_set_contact(int i, std::string first, std::string last, std::string nickname,
		std::string phone, std::string secret)
{
	this->_i = i;
	this->_first_name = first;
	this->_last_name = last;
	this->_nickname = nickname;
	this->_phone = phone;
	this->_secret = secret;
	return ;
}

std::string	Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (this->_nickname);
}

int	Contact::get_index(void) const
{
	return (this->_i);
}
/*
//void	Contact::ft_print_contact(int rows)
void	PhoneBook::ft_print_contact(void)
{
	const char	*horizontal = "\u2500";
	const char	*vertical = "\u2502";
	const char	*corner_tl = "\u250C";
	const char	*corner_tr = "\u2510";
	const char	*corner_bl = "\u2514";
	const char	*corner_br = "\u2518";
	const char	*cross = "\u253C";
	const char	*u_top = "\u252C";
	const char	*u_bottom = "\u253C";
	const char	*u_left = "\u253C";
	const char	*u_right = "\u253C";

	std::locale::global(std::locale("en_US.UTF-8"));
	std::cout << corner_tl;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 6; j++)
			std::cout << horizontal << horizontal << horizontal;
		if (i < 3)
			std::cout << u_top;
	}
	std::cout << corner_tr << std::endl;
/*
	for (int i = 0; i < 4; ++i)
	{
		if (i == 0)
			std::cout << vertical << "\t      index" << vertical;
		if (i == 1)
			std::cout << "\t    first_name" << vertical;
		if (i == 2)
			std::cout << "\t        last_name" << vertical;
		if (i == 3)
			std::cout << "\t    nickname" << vertical << std::endl;
	}
*/

 for (int i = 0; i < this->_i; ++i) {
        for (int k = 0; k < 1; ++k) {
            std::cout << vertical;
            for (int j = 0; j < 1; j++) {
                std::cout << "\t          " << this->_i << vertical;
                std::cout << "\t             " << this->_first_name << vertical;
                std::cout << "\t                " << this->_last_name << vertical; 
                std::cout << "\t           " << this->_nickname << vertical;
            }
            std::cout << std::endl;
        }

        if (i < this->_i - 1) {
            std::cout << u_left;
            for (int j = 0; j < 4; ++j) {
                for (int j = 0; j < 6; j++)
                         std::cout << horizontal << horizontal << horizontal;
                if (j < 4 - 1) {
                    std::cout << cross;
                }
            }
            std::cout << u_right << std::endl;
        }
    }

    // Ligne inférieure
    std::cout << corner_bl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; j++)
                std::cout << horizontal << horizontal << horizontal;
        if (i < 4 - 1) {
            std::cout << u_bottom;
        }
    }
    std::cout << corner_br << std::endl;
}
//	std::cout << "Enter 'ADD' to save a new one or the index to display a specific one.\n";
//	std::cout << "If you want to quit, please enter 'EXIT'\n";
