/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:34:09 by barmarti          #+#    #+#             */
/*   Updated: 2025/11/27 17:45:55 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

# include "phonebook.class.hpp"
#include <string>

void	display_ui(Phonebook book);
void	display_contact(int index, Phonebook book);
void	display_field(std::string str);
bool	check_lenght(std::string str, size_t max);

#endif