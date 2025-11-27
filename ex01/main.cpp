/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:13:53 by barmarti          #+#    #+#             */
/*   Updated: 2025/11/24 15:58:37 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"
#include "contact.class.hpp"
#include <iostream>


int	main(void)
{
	std::string	str;
	Phonebook	Phonebook;

	std::cin >> str;
	while (str != "EXIT")
	{
		if (str == "ADD")
			Phonebook.add();
		else if (str == "SEARCH")
			Phonebook.search();
		std::cin >> str;
	}
	return 0;
}
