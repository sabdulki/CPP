/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:37:56 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/02 16:40:45 by sabdulki         ###   ########.fr       */
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
	public:
		Contact() {};
		~Contact() {};
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
		Contact allContacts[8];
	public:
		int currentIndex;
		PhoneBook(int contacts, int width, int firstIndex);
		~PhoneBook() {};
		int getContactsAmount() {
			return (contactsAmount);
		}
		void setContactsAmount(int newAmount) {
			contactsAmount = newAmount;
		}
		int getTableWidth() {
			return (tableWidth);
		}
		void setTableWidth(int newWidth) {
			tableWidth = newWidth; 
		}
		Contact& getContact(PhoneBook& book, int index) {
    		return book.allContacts[index];
		}
		void setContact(PhoneBook& book, Contact& newContact, int index) {
			book.allContacts[index] = newContact;
		}
};

enum Flag 
{
	GET = 0,
	SET = 1,
};

/* commands */
PhoneBook	addCmd(PhoneBook book);
PhoneBook	searchCmd(PhoneBook book);
int 		exitCmd();

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

#endif