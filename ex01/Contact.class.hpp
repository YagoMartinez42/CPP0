/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:10:14 by samartin          #+#    #+#             */
/*   Updated: 2024/01/30 14:07:30 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# ifndef TOTAL_FIELDS
#  define TOTAL_FIELDS 5
# endif
# include <iostream>

class Contact
{
	public:
		Contact();
		Contact(std::string firstNameP, std::string lastNameP, std::string nickNameP, \
			std::string phoneNumP, std::string darkSecretP);
		~Contact();
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNum() const;
		std::string getDarkSecret() const;
		void setFirstName(std::string FirstNameP);
		void setLastName(std::string lastNameP);
		void setNickName(std::string nickNameP);
		void setPhoneNum(std::string phoneNumP);
		void setDarkSecret(std::string darkSecretP);
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNum;
		std::string darkSecret;
};

#endif