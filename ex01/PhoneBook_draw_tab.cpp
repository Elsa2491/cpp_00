/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_draw_tab.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:50:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/09 15:56:24 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string ft_truncate(std::string str)
{
	if (!str.length())
		return std::string();
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	ft_print_top_line(void)
{
	std::cout << CORNER_TL;
	for (int col = 0; col < 4; ++col)
	{
		for (int width = 0; width < 10; width++)
			std::cout << HORIZONTAL;
		if (col < 3)
			std::cout << T_TOP;
	}
}

void	ft_print_header(void)
{
	std::cout << CORNER_TR << std::endl;
	std::cout << VERTICAL;
	std::cout << std::setw(10) << "Index" << VERTICAL;
	std::cout << std::setw(10) << "First name" << VERTICAL;
	std::cout << std::setw(10) << "Last name" << VERTICAL;
	std::cout << std::setw(10) << "Nickname" << VERTICAL << std::endl;
	std::cout << T_LEFT;
	for (int j = 0; j < 4; ++j) {
		for (int k = 0; k < 10; k++)
			std::cout << HORIZONTAL;
		if (j < 4 - 1)
			std::cout << CROSS;
	}
	std::cout << T_RIGHT << std::endl;
}

void	ft_print_bottom_line(void)
{
	std::cout << CORNER_BL;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 10; j++)
			std::cout << HORIZONTAL;
		if (i < 3)
			std::cout << T_BOTTOM;
	}
	std::cout << CORNER_BR << std::endl;
}

void	PhoneBook::ft_select_contact(void)
{
	int	i;
	std::cout << "Select a contact to display his informations" << std::endl;
	while (std::getline(std::cin, this->_input))
	{
		if (!ft_is_digit(this->_input))
			std::cout << "Please, enter a correct input (digit > 0 only)" << std::endl;
		if (ft_is_digit(this->_input))
		{
			if (atoi(this->_input.c_str()) > this->_contact_nb || atoi(this->_input.c_str()) == 0)
				std::cout << "Sorry, you can only choose between 1 and " << this->_contact_nb << std::endl;
			else
			{
				i = atoi(this->_input.c_str()) - 1; 
				std::cout << " First name:\t\t" << this->_contact[i].ft_get_first_name() << "\n";
				std::cout << " Last name:\t\t" << this->_contact[i].ft_get_last_name()<< "\n";
				std::cout << " Nickname:\t\t" << this->_contact[i].ft_get_nickname() << "\n";
				std::cout << " Phone:\t\t\t" << this->_contact[i].ft_get_phone() << "\n";
				std::cout << " Darkest secret:\t" << this->_contact[i].ft_get_secret() << "\n\n";
				std::cout << "\nEnter 'ADD' to save a new one or 'SEARCH' to display a specific one.\n";
				std::cout << "If you want to quit, please enter 'EXIT'" << std::endl;
				return ;
			}	
		}
	}
}

void	PhoneBook::ft_print_contact(void)
{
	ft_print_top_line();
	ft_print_header();
	for (int height = 0; height < this->_contact_nb; ++height) {
		std::cout << VERTICAL;
		std::cout << std::setw(10) << height + 1 << VERTICAL;
		std::cout << std::setw(10) << ft_truncate(this->_contact[height].ft_get_first_name()) << VERTICAL;
		std::cout << std::setw(10) << ft_truncate(this->_contact[height].ft_get_last_name()) << VERTICAL;
		std::cout << std::setw(10) << ft_truncate(this->_contact[height].ft_get_nickname()) << VERTICAL;
		std::cout << std::endl;
		if (height < this->_contact_nb - 1) {
			std::cout << T_LEFT;
			for (int j = 0; j < 4; ++j) {
				for (int k = 0; k < 10; k++)
					std::cout << HORIZONTAL;
				if (j < 4 - 1)
					std::cout << CROSS;
			}
			std::cout << T_RIGHT << std::endl;
		}
	}
	ft_print_bottom_line();
	ft_select_contact();
}
