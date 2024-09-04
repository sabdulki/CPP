/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:37:56 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/04 14:32:42 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>

#include "Contact.hpp"

/* COLORS */
#define BOLD_WHITE "\033[1;37m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define DEFAULT "\033[0m"

class PhoneBook {
	private:
		const int contactsAmount;
		const int tableWidth;
		int currentIndex;
		Contact allContacts[8];
	public:
		PhoneBook(int contacts, int width, int index) : contactsAmount(contacts), tableWidth(width), currentIndex(index) {};
		~PhoneBook() {};
		Contact& getContact(int index);
		void 	setContact(Contact& newContact, int index);
		int 	getContactsAmount();
		int 	getTableWidth();
		int 	displayTable();
		void 	printContactInfo(int i);
		void 	printCertainInfo(int index);
		void 	printField(std::string data);
		int 	checkInRange(int index);
		void 	addCmd();
		void 	searchCmd();
		
};

enum Flag 
{
	GET = 0,
	SET = 1,
};

void			exitCmd();
void			printGreeting();
void			printWarning();
int				indexGetSet(int flag);
int				checkOnlyInt(std::string strIndex, std::string errorMsg);
int				checkOnlyChars(std::string str);
std::string		safeCin(void);
std::string 	printOption(int index, std::string message);

PhoneBook&	test(PhoneBook& book);
#endif