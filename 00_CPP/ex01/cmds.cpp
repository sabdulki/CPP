/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmds.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:33:21 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/22 16:47:44 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

/*
Если пользователь введет эту команду, ему будет предложено вводить информацию
о новом контакте по одному полю за раз. После заполнения всех полей
добавьте контакт в телефонную книгу.
◦ Контактные поля: имя, фамилия, псевдоним, номер телефона и
"Самый секретный". У сохраненного контакта не может быть пустых полей.
*/

/*
int myNumbers[5] = {10, 20, 30, 40, 50};
int getArrayLength = sizeof(myNumbers) / sizeof(int);
*/

string printOption(int index, string message)
{
	string str;
	if (index > 0)
		cout << index << ") " << message;
	else
		cout << message;
	cin >> str;
	return (str);
}

int indexGetSet(int flag)
{
	static int	index;

	if (flag == SET)
		index += 1;
	if (flag == SET_ZERO)
		index = 0;
	return (index);
}

int addCmd(PhoneBook book)
{
	Contact newContact;

	cout << "Please fill 5 fields.\n";
	newContact.firstName = printOption(1, "First Name: ");
	newContact.lastName = printOption(2, "Last Name: ");
	newContact.nickname = printOption(3, "Nickname: ");
	newContact.phoneNumber = printOption(4, "Phone Number: ");
	newContact.darkestSecret = printOption(5, "Darkest secret: ");
	book.currentIndex = indexGetSet(SET);
	if (book.currentIndex > book.getContactsAmount())
		book.currentIndex = 8;
	book.allContacts[book.currentIndex] = newContact;
	cout << "does it work?: " << book.currentIndex << book.allContacts[book.currentIndex].firstName << endl;
	cout << "New contact was successfully added to the Phone Book!\n";
	return (0);
}

int printSpaces(PhoneBook book, int len)
{
	int spacesLen;

	spacesLen = 
}

int searchCmd(PhoneBook book)
{
	/* Display the saved contacts as a list of 4 columns: 
	index, first name, last name and nickname */
	int i;

	cout << "| index      | first name | last name  | nickname   |\n";
	cout << "| ---------- | ---------- | ---------- | ---------- |\n";
	if (book.currentIndex > 0)
	{
		for (i = 1; i <= book.currentIndex; i++;)
		{
			cout << "| " << cout i;
			printSpaces(book, 1);
			cout << book.allContacts[i].firstName;
			printSpaces(book, book.allContacts[i].firstName.length());
			
		}
		
	}
	return (0);
}

int exitCmd()
{
	//free all
	cout << "Program successfully exited.\n";
	exit (0);
}