/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftUtils.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:42:09 by samartin          #+#    #+#             */
/*   Updated: 2024/01/26 14:32:16 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>

std::string ftToUpper(std::string str)
{
	int i = -1;
	int len = str.length();

	while (++i < len)
		str[i] = std::toupper(str[i]);
	return (str);
}

std::string ftToString(int num)
{
	std::stringstream ss;
    ss << num;
    return (ss.str());
}

std::string ftFormatTo10(std::string str)
{
	std::stringstream ss;

	if (str.length() > 10)
		ss << str.substr(0, 9) << ".";
	else
		ss << std::setw(10) << str;
	return (ss.str());
}
