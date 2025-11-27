/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:37:59 by barmarti          #+#    #+#             */
/*   Updated: 2025/11/27 17:43:06 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <iostream>
#include <iomanip>

bool	check_lenght(std::string str, size_t max)
{
	if (str.length() > max)
		return (false);
	return (true);
}

void	display_ui(Phonebook book)
{
	int	index = book.getindex();

	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int num = 0 ; num != index ; num ++)
		display_contact(num, book);
	std::cout << "_____________________________________________" << std::endl;
}

void	display_contact(int index, Phonebook book)
{
	std::string	str;
	
	Contact contact = book.getcontact(index);;
	std::cout << "        " << index << "|";
	str = contact.get_first_name();
	display_field(str);
	str = contact.get_last_name();
	display_field(str);
	str = contact.get_nickname();
	display_field(str);	
	std::cout << std::endl;
}

void	display_field(std::string str)
{
	int	cmp;

	if (!check_lenght(str, 10))
	{
		str.append(str, 0, 9) + ".";
		std::cout << str << "|";
	}
	else
	{
		cmp = str.length() - 10;
		std::cout << std::setw(cmp);
		std::cout << str << "|";
	}
}
