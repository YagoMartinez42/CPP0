/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:49:13 by samartin          #+#    #+#             */
/*   Updated: 2024/02/02 12:09:03 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "ftUtils.hpp"

PhoneBook::PhoneBook()
{
	this->slot = 0;
}

PhoneBook::~PhoneBook() {}

int PhoneBook::menu()
{
	int idx2Display;
	std::string uinput;
	Contact	newContact;

	std::cout << "OPTIONS: ADD, SEARCH, EXIT: ";
	std::getline(std::cin, uinput);
	std::cout << std::endl;
	uinput = ftToUpper(uinput);
	if ( uinput == "ADD")
	{
		newContact = this->inputContact();
		this->addContact(newContact);
		return (1);
	}
	else if (uinput == "SEARCH")
	{
		displayList();
		idx2Display = prompt4Idx();
		if (idx2Display >= 0 && idx2Display < MAX_CONTACTS && (this->conList[idx2Display].getFirstName() != ""))
			displayContact(this->conList[idx2Display]);
		else
			std::cout << "INVALID INDEX" << std::endl << std::endl;
		return (2);
	}
	else if (uinput == "EXIT")
	{
		std::cout << "GOOD BYE!" << std::endl;
		return (3);
	}
	else
		std::cout << "UNRECOGNIZED OPTION" << std::endl;
	return (0);
}

Contact PhoneBook::inputContact()
{
	Contact newContact = Contact();

	std::string keys [5] = { "FIRST NAME", "LAST NAME", "NICKNAME", "PHONE NUMBER", "DARKEST SECRET" };
	std::string values [5] = { "", "", "", "", "" };
	int i = 0;

	while (i < TOTAL_FIELDS)
	{
		std::cout << "ENTER " << keys[i] << ": ";
		std::getline(std::cin, values[i]);
		std::cout << std::endl;
		if (values[i] == "")
			std::cout << "FIELDS CAN NOT BE EMPTY" << std::endl;
		else
			i++;
	}
	newContact.setFirstName(values[0]);
	newContact.setLastName(values[1]);
	newContact.setNickName(values[2]);
	newContact.setPhoneNum(values[3]);
	newContact.setDarkSecret(values[4]);
	return (newContact);
}

void PhoneBook::addContact(Contact contact2Add)
{
	this->conList[this->slot] = contact2Add;
	std::cout << "CONTACT ADDED" << std::endl;
	if (this->slot == MAX_CONTACTS - 1)
	{
		this->slot = 0;
		std::cout << "¡LIST IS NOW FULL! NEXT ADDITIONS WILL REPLACE CURRENT" << std::endl;
	}
	else
		this->slot++;
	std::cout << std::endl;
}

void PhoneBook::displayList() const
{
	int i = 0;

	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME" << std::endl;
	std::cout << "----------|----------|----------|----------" << std::endl;
	while (i < MAX_CONTACTS && this->conList[i].getFirstName() != "")
	{
		std::cout << "         " << ftToString(i + 1) << "|";
		std::cout << ftFormatTo10(this->conList[i].getFirstName()) << "|";
		std::cout << ftFormatTo10(this->conList[i].getLastName()) << "|";
		std::cout << ftFormatTo10(this->conList[i].getNickName());
		std::cout << std::endl;
		i++;
	}
	std::cout << std::endl;
}

int PhoneBook::prompt4Idx() const
{
	std::string idx = "";
	int	i = -1;

	std::cout << "WHICH INDEX TO DISPLAY?: ";
	std::getline(std::cin, idx);
	std::cout << std::endl;
	if (idx.length() == 1 && idx[0] <= (char)(MAX_CONTACTS + '0') && idx[0] >= '1')
	{
		std::istringstream(idx) >> i;
		i--;
	}
	return (i);
}

void PhoneBook::displayContact(Contact contact2Display) const
{
	std::cout << "FIRST NAME: " << contact2Display.getFirstName() << std::endl;
	std::cout << "LAST NAME: " << contact2Display.getLastName() << std::endl;
	std::cout << "NICKNAME: " << contact2Display.getNickName() << std::endl;
	std::cout << "PHONE NUMBER: " << contact2Display.getPhoneNum() << std::endl;
	std::cout << "DARKEST SECRET: " << contact2Display.getDarkSecret() << std::endl;
	std::cout << std::endl;
}
