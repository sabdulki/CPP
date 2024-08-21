/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:37:56 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/21 22:25:17 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>  // For std::toupper
#include <fstream>  // Required for file handling
using namespace std;

class Contact {
	public: 
		string firstName;
		string lastName;
		string nickname;
		string phoneNumber;
		string darkestSecret;
};

class PhoneBook {
	private:
		int contactsAmount;
	public:
		int getContactsAmount() {
			return (contactsAmount);
		}
		void setContactsAmount(int newAmount) {
			contactsAmount = newAmount;
		}
	string allContacts[];
};

int addCmd();
int searchCmd();
int exitCmd();

#endif