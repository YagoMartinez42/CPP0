/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:09:31 by samartin          #+#    #+#             */
/*   Updated: 2024/02/02 15:21:32 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact()
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickName = "";
	this->_phoneNum = "";
	this->_darkSecret = "";
}

Contact::Contact(std::string firstNameP, std::string lastNameP, std::string nickNameP, \
	std::string phoneNumP, std::string darkSecretP) \
	: _firstName(firstNameP), _lastName (lastNameP), _nickName(nickNameP), \
	_phoneNum(phoneNumP), _darkSecret(darkSecretP) {}

Contact::~Contact() {}

std::string Contact::getFirstName() const
{
	return (this->_firstName);
}

std::string Contact::getLastName() const
{
	return (this->_lastName);
}

std::string Contact::getNickName() const
{
	return (this->_nickName);
}

std::string Contact::getPhoneNum() const
{
	return (this->_phoneNum);
}

std::string Contact::getDarkSecret() const
{
	return (this->_darkSecret);
}

void Contact::setFirstName(std::string firstNameP)
{
	this->_firstName = firstNameP;
}

void Contact::setLastName(std::string lastNameP)
{
	this->_lastName = lastNameP;
}

void Contact::setNickName(std::string nickNameP)
{
	this->_nickName = nickNameP;
}

void Contact::setPhoneNum(std::string phoneNumP)
{
	this->_phoneNum = phoneNumP;
}

void Contact::setDarkSecret(std::string darkSecretP)
{
	this->_darkSecret = darkSecretP;
}
