/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_check_input.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:50:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/10 18:57:13 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	ft_is_alpha(std::string str)
{
	int	i;

	i = 0;
	if (!str.length() || (str[0] == '-' && str.length() == 1))
		return (0);
	while (str[i])
	{
		if (!isalpha(str[i]))
			if (str[i] != '-')
				return (0);
		i += 1;
	}
	return (1);
}

int	ft_is_digit(std::string str)
{
	int	i;

	i = 0;
	if (!str.length())
		return (0);
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i += 1;
	}
	return (1);
}

int	ft_check_phone(std::string str)
{
	int	i;
	unsigned long	size;

	i = 0;
	size = 10;
	if (!str.length())
		return (0);
	while (str[i])
	{
		if (str[i] == '+' && i == 0)
			size += 1;
		else if (!isdigit(str[i]))
			return (0);
		i += 1;
	}
	if (str[0] == '+')
	{
		if (str.length() - 1 == size)
			return (1);
		return (0);
	}
	else if (str.length() != size)
		return (0);
	return (1);
}

int	ft_is_print(std::string str)
{
	int	i;

	i = 0;
	if (!str.length()) 
		return (0);
	while (str[i])
	{
		if (!isprint(str[i]))
			return (0);
		i += 1;
	}
	return (1);
}
