/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:07:38 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/12 18:35:31 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <string>

void	ft_toupper(std::string str)
{
	int	i;

	i = 0;
	while (str.c_str()[i])
		putchar(toupper(str.c_str()[i++]));
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < argc)
		ft_toupper(argv[i++]);
	std::cout << std::endl;
}
