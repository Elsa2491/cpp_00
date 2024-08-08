/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:50:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/08 18:22:31 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
//#include "Contact.hpp"

/*
   PhoneBook::PhoneBook(void) 
   {
   this->_index = 0;
   }

   PhoneBook::~PhoneBook(void) {}
 */
void	PhoneBook::ft_add_contact(void)
{
	Contact	contact;
	std::string	first_n;
	std::string	last_n;
	std::string	nickname;
	std::string	phone;
	std::string	secret;

	first_n = ft_add_first_name();
	if (!first_n.size())
		return ;
	last_n = ft_add_last_name();
	if (!last_n.size())
		return ;
	nickname = ft_add_nickname();
	phone = ft_add_phone();
	if (!phone.size())
		return ;
	secret = ft_add_secret();
//	this->_index += 1;
	this->_contact[this->_index].ft_set_contact(this->_index, first_n, last_n, nickname, phone, secret);
	this->_index += 1;
	// if (this->_index == 1)
	// 	std::cout << "\nYou have " << this->_index << " contact"  << std::endl;
	// else
	// 	std::cout << "\nYou have " << this->_index << " contacts"  << std::endl;
	std::cout << "\nEnter 'ADD' to save a new one or 'SEARCH' to display a specific one.\n";
	std::cout << "If you want to quit, please enter 'EXIT'\n";
	return ;
}


Contact	PhoneBook::ft_retrieve_contact(int i)
{
	
	return  (this->_contact[i]);
}

void	PhoneBook::ft_print_contact(void)
{
	const char	*horizontal = "\u2500";
	const char	*vertical = "\u2502";
	const char	*corner_tl = "\u250C";
	const char	*corner_tr = "\u2510";
	const char	*corner_bl = "\u2514";
	const char	*corner_br = "\u2518";
	const char	*cross = "\u253C";
	const char	*t_top = "\u252C";
	const char	*t_bottom = "\u2534";
	const char	*t_left = "\u251C";
	const char	*t_right = "\u2524";

	std::locale::global(std::locale("en_US.UTF-8"));
	std::cout << corner_tl;
	for (int col = 0; col < 4; ++col)
	{
		for (int width = 0; width < 10; width++)
			std::cout << horizontal;
		if (col < 3)
			std::cout << t_top;
	}
	std::cout << corner_tr << std::endl;
	for (int height = 0; height < this->_index; ++height) {
		std::cout << vertical;
//		for (int j = 0; j < 1; j++) {
			//			std::string cell = data[i][j]; 
			//std::cout << std::string(11 - cell.length(), ' ') << this->_i << vertical;
//			ft_retrieve_contact(i); //._i << vertical;
			//std::cout << std::setw(10) << this->_index << vertical;
			std::cout << std::setw(10) << height + 1 << vertical;
			std::cout << std::setw(10) << this->_contact[height].get_first_name() << vertical;
			std::cout << std::setw(10) << this->_contact[height].get_last_name() << vertical;
			std::cout << std::setw(10) << this->_contact[height].get_nickname() << vertical;
			//	std::cout << std::setw(10) << this->_contact[i]._first_name << vertical;
			//	std::cout << std::setw(10) << this->_contact[i]._last_name << vertical;
			//	std::cout << std::setw(10) << this->_contact[i]._nickname << vertical;
			//	std::cout << std::setw(10) << this->_last_name << vertical;
			//	std::cout << std::setw(10) << this->_nickname << vertical;
			//			std::cout << std::string(11 - cell.length(), ' ') << this->_first_name << vertical;
			//			std::cout << std::string(11 - cell.length(), ' ') << this->_last_name << vertical;
			//			std::cout << std::string(11 - cell.length(), ' ') << this->_nickname << vertical;
			std::cout << std::endl;
			if (height < this->_index - 1) {
				std::cout << t_left;
				for (int j = 0; j < 4; ++j) {
					for (int k = 0; k < 10; k++)
						std::cout << horizontal; // << horizontal << horizontal;
					if (j < 4 - 1) {
						std::cout << cross;
					}
				}
				std::cout << t_right << std::endl;
			}
		//}
	}
	std::cout << corner_bl; // << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 10; j++)
			std::cout << horizontal; // << horizontal << horizontal;
		if (i < 3)
			std::cout << t_bottom;
	}
	std::cout << corner_br << std::endl;
	//	}
	//}
	//			std::cout << "Enter 'ADD' to save a new one or the index to display a specific one.\n";
	//			std::cout << "If you want to quit, please enter 'EXIT'\n";
	}

void	PhoneBook::ft_print_instructions(void)
{
	int	i;
	while (std::getline(std::cin, this->_input))
	{
		if (!this->_input.compare("ADD"))
			ft_add_contact();
		else if (!this->_input.compare("SEARCH"))
		{
			if (!this->_index)
			{
				std::cout << "You don't have any contact yet.\n";
				std::cout << "Please enter 'ADD' to save a new one before searching, ";
				std::cout << "or 'EXIT' if you want to quit.\n";
			}
			else
			{
				//			for (i = 1; i <= this->_index; i++)
							//	ft_retrieve_contact(i).ft_print_contact();
				ft_print_contact();
			}
		}
		else if (!this->_input.compare("EXIT"))
		{
			std::cout << "What a pity that you already want to leave us!" << std::endl;
			return ;
		}
		else
			std::cout << "Please, enter a correct command: ADD, SEARCH or EXIT\n";
	}
}
