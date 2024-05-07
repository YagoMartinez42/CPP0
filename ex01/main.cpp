/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:47:02 by samartin          #+#    #+#             */
/*   Updated: 2024/01/23 16:19:51 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int main()
{
	PhoneBook cBook = PhoneBook ();
	int option = 0;

	while (option != 3 && !std::cin.eof())
	{
		option = cBook.menu();

	}
	return (0);
}
