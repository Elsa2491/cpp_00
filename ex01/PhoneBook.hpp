/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:46:16 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/02 18:20:45 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

class	PhoneBook
{
	public:
		std::string	tab[8];
//		char	*dir[];
/*
		char	*first_name;
		char	*last_name;
		char	*nick_name;
		int	phone;
		int	secret;
		PhoneBook(char *p1, char *p2, char *p3, int p4, int p5);
*/
//		char	a1;
		std::string first_name;
		PhoneBook(void);
		~PhoneBook(void);

		void add(void);
//		void search(void);
//		void exit(void);
};

#endif
