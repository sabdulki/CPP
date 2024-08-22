/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:37:56 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/22 16:48:51 by sabdulki         ###   ########.fr       */
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
		int tableWidth;
	public:
		int currentIndex;
		int getPrivateInt() {
			return (contactsAmount);
		}
		void setContactsAmount(int newAmount) {
			contactsAmount = newAmount;
		}
	Contact allContacts[contactsAmount];
};

enum Flag 
{
	GET = 0,
	SET = 1,
	SET_ZERO = 2,
};

#define BOLD_WHITE "\033[1;37m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define DEFAULT "\033[0m"



int addCmd();
int searchCmd();
int exitCmd();

#endif