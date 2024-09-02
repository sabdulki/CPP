/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:37:56 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/02 22:35:53 by sabdulki         ###   ########.fr       */
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
		// newContact.setup(string filed, int flag)
};

class PhoneBook {
	private:
		const int contactsAmount = 8;
		const int tableWidth = 10;
		Contact allContacts[8];
	public:
		int currentIndex = 0;
		PhoneBook() {};
		~PhoneBook() {};
		int getContactsAmount() {
			return (contactsAmount);
		}
		int getTableWidth() {
			return (tableWidth);
		}
		// void setTableWidth(int newWidth) {
		// 	tableWidth = newWidth; 
		// }
		Contact& getContact(int index) {
    		return allContacts[index];
		}
		void setContact(Contact& newContact, int index) {
			allContacts[index] = newContact;
		}
		void printContactInfo(int i);
		void printCertainInfo(int index);
		int checkInRange(int index);
		void printField(string data);
		int displayTable();
		void addCmd();
		void searchCmd();
		
};

enum Flag 
{
	GET = 0,
	SET = 1,
};

/* commands */
void exitCmd();

int indexGetSet(int flag);
string safeCin(void);

/* utils */
void		printGreeting();
void		printWarning();
void 		printCertainInfo(PhoneBook book, int index);
string 		printOption(int index, string message);
int 		printField(PhoneBook book, string data);
int			checkOnlyInt(string strIndex, string errorMsg);
int			checkOnlyChars(string str);
int			checkInRange(int index, PhoneBook book);

PhoneBook& test(PhoneBook& book);
#endif