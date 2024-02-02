/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:49:33 by samartin          #+#    #+#             */
/*   Updated: 2024/01/26 15:21:54 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# ifndef MAX_CONTACTS
#  define MAX_CONTACTS 8
# endif
# include <iostream>
# include "Contact.class.hpp"

class PhoneBook
{
	public:
		Contact conList [MAX_CONTACTS];

		PhoneBook();
		~PhoneBook();
		
		int menu();
	private:
		int slot;

		Contact inputContact();
		void addContact(Contact contact2Add);
		void displayList() const;
		int prompt4Idx() const;
		void displayContact(Contact contact2Display) const;
};

#endif
