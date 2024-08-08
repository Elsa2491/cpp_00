/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_check_input.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:50:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/08 18:32:30 by eltouma          ###   ########.fr       */
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
		{
			if (str[i] != '-')
				return (0);
		}
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
		if (!isdigit(str[i])) //  || str.length() != 10)
			return (0);
		i += 1;
	}
	return (1);
}
