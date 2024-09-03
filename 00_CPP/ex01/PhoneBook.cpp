/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:20:27 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/03 12:21:08 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

int PhoneBook::getContactsAmount() {
	return (contactsAmount);
}

int PhoneBook::getTableWidth() {
	return (tableWidth);
}

Contact& PhoneBook::getContact(int index) {
	return allContacts[index];
}

void PhoneBook::setContact(Contact& newContact, int index) {
	allContacts[index] = newContact;
}
