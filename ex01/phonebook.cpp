/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:59:38 by barmarti          #+#    #+#             */
/*   Updated: 2025/11/27 17:42:35 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"
#include "contact.class.hpp"
#include "utils.hpp"
#include <iostream>
#include <sstream>

Phonebook::Phonebook(void)
{
	std::cout << "Wecolme in your wonderful Phonebook" << std::endl;
	this->_index = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "See you !" << std::endl;
	return ;
}

void	Phonebook::add(void)
{
	std::string	str = "";

	if (this->_index == 7)
	{
		this->_index = 0;
		std::cout << "Warning: about to overwrite " << this->_contact[this->_index].get_first_name() << std::endl;
	}
	else
		_index = (_index % 8) + 1;
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter a first name" << std::endl;
		if(std::getline(std::cin, str) && str != "")
			this->_contact[_index % 8].set_first_name(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->_contact[_index].get_first_name() << " last name" << std::endl;
		if(std::getline(std::cin, str) && str != "")
			this->_contact[_index % 8].set_last_name(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->_contact[_index].get_first_name() << " nickname" << std::endl;
		if(std::getline(std::cin, str) && str != "")
			this->_contact[_index % 8].set_nickname(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->_contact[_index].get_first_name() << " phone number" << std::endl;
		if(std::getline(std::cin, str) && str != "")
			this->_contact[_index % 8].set_phone(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Now if you can spit " << this->_contact[_index].get_first_name() << "'s secret" << std::endl;
		if(std::getline(std::cin, str) && str != "")
			this->_contact[_index % 8].set_secret(str);
		std::cout << "Contact number " << this->_index % 8 << " has been added" << std::endl;
	}
	this->_index++;
	return ;
}

int	Phonebook::getindex(void) const
{
	return (this->_index);
}


void	Phonebook::search(void)
{
	Contact				contact;
	std::string			str = "";
	std::stringstream	ss;
	int					index;

	if (_index == 0)
		std::cout << "Empty phonebook, please add contacts first" << std::endl;
	else
	{
		display_ui(*this);
		std::string	str = "";
		std::cout << "Who do you wanna print ?" << std::endl;
		if((std::getline(std::cin, str) && str != "") && (check_lenght(str, 1)))
		{
			ss << str;
			ss >> index;
			if (index > 0 && index < 8)
				print(getcontact(index));
		}
		ss << "";
		ss.clear();
		str = "";
	}
	return ;
}
void	Phonebook::print(Contact contact) const
{
	std::cout << contact.get_first_name() << std::endl;
	std::cout << contact.get_last_name() << std::endl;
	std::cout << contact.get_nickname() << std::endl;
	std::cout << contact.get_phone() << std::endl;
	std::cout << contact.get_secret() << std::endl;
}

Contact	Phonebook::getcontact(int index) const
{
	return (this->_contact[index]);
}
