/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:17:50 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/04 14:34:34 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

bool Contact::setField(int fieldIndex, std::string data)
{
	if (data.empty())
		return (false);
	switch (fieldIndex)
	{
		case 1:
			this->firstName = data;
			break;
		case 2:
			this->lastName = data;
			break;
		case 3:
			this->nickname = data;
			break;
		case 4:
			this->phoneNumber = data;
			break;
		case 5:
			this->darkestSecret = data;
			break;
		default:
			std::cout << "Wrong index\n";
			return (false);
	}
	return (true);
}

std::string Contact::getField(int fieldIndex)
{
	switch (fieldIndex)
	{
		case 1:
			return (this->firstName);
		case 2:
			return (this->lastName);
		case 3:
			return (this->nickname);
		case 4:
			return (this->phoneNumber);
		case 5:
			return (this->darkestSecret);
		default:
			std::cout << "Wrong index\n";
			return ("");
	}
	return ("");
}
