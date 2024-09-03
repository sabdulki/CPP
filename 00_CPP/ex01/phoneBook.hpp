/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:37:56 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/03 12:22:50 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
using namespace std;

/* COLORS */
#define BOLD_WHITE "\033[1;37m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define DEFAULT "\033[0m"

class Contact {
	private:
		string firstName;
		string lastName;
		string nickname;
		string phoneNumber;
		string darkestSecret;
	public:
		Contact() {};
		~Contact() {};
		bool setField(int fieldIndex, string data);
		string getField(int fieldIndex);
};

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
		void 	printField(string data);
		int 	checkInRange(int index);
		void 	addCmd();
		void 	searchCmd();
		
};

enum Flag 
{
	GET = 0,
	SET = 1,
};

void		exitCmd();
int			indexGetSet(int flag);
string		safeCin(void);
void		printGreeting();
void		printWarning();
string 		printOption(int index, string message);
int			checkOnlyInt(string strIndex, string errorMsg);
int			checkOnlyChars(string str);

PhoneBook&	test(PhoneBook& book);
#endif