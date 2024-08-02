/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:07:38 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/02 14:08:30 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

void	ft_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		putchar(toupper(str[i++]));
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
