/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:09:31 by samartin          #+#    #+#             */
/*   Updated: 2024/01/30 14:15:03 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact()
{
	this->firstName = "";
	this->lastName = "";
	this->nickName = "";
	this->phoneNum = "";
	this->darkSecret = "";
}

Contact::Contact(std::string firstNameP, std::string lastNameP, std::string nickNameP, \
	std::string phoneNumP, std::string darkSecretP) \
	: firstName(firstNameP), lastName (lastNameP), nickName(nickNameP), \
	phoneNum(phoneNumP), darkSecret(darkSecretP) {}

Contact::~Contact() {}

std::string Contact::getFirstName() const
{
	return (this->firstName);
}

std::string Contact::getLastName() const
{
	return (this->lastName);
}

std::string Contact::getNickName() const
{
	return (this->nickName);
}

std::string Contact::getPhoneNum() const
{
	return (this->phoneNum);
}

std::string Contact::getDarkSecret() const
{
	return (this->darkSecret);
}

void Contact::setFirstName(std::string firstNameP)
{
	this->firstName = firstNameP;
}

void Contact::setLastName(std::string lastNameP)
{
	this->lastName = lastNameP;
}

void Contact::setNickName(std::string nickNameP)
{
	this->nickName = nickNameP;
}

void Contact::setPhoneNum(std::string phoneNumP)
{
	this->phoneNum = phoneNumP;
}

void Contact::setDarkSecret(std::string darkSecretP)
{
	this->darkSecret = darkSecretP;
}
