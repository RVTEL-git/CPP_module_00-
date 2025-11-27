/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:23:29 by barmarti          #+#    #+#             */
/*   Updated: 2025/11/24 14:56:32 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	str_toupper(std::string str)
{
	int len = str.length();

	for (int i = 0; i != len; i++){
		std::cout << (char)toupper(str.at(i));
	}
}

int	main(int ac, char *av[])
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	else
	{
		for (int i = 1; i != ac; i++)
			str_toupper(av[i]);
		std::cout << std::endl;
		return 0;
	}
	return 1;
}