/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmds.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:33:21 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/22 18:46:50 by sabdulki         ###   ########.fr       */
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
	newContact.firstName = printOption(1, "First Name: "); //parsing: only chars. 1 word
	newContact.lastName = printOption(2, "Last Name: "); //parsing: only chars. 1 word
	newContact.lastName = printOption(3, "Nickname: "); // 1 word
	newContact.lastName = printOption(4, "Phone Number: "); //parsing: only int. 1 word
	newContact.darkestSecret = printOption(5, "Darkest secret: "); // many words -> use getline
	book.currentIndex = indexGetSet(SET);
	if (book.currentIndex > book.getContactsAmount())
		book.currentIndex = 8;
	book.allContacts[book.currentIndex] = newContact;
	cout << "does it work?: " << book.currentIndex << book.allContacts[book.currentIndex].firstName << endl;
	cout << GREEN << "New contact was successfully added to the Phone Book!\n" << DEFAULT;
	cout << "Current index in add: " << book.currentIndex << endl;
	return (0);
}

int checkDataLen(PhoneBook book, string data)
{
	int spacesLen;
	int dataLen;

	// if (data == NULL)
	// 	dataLen = 1;
	// else
		dataLen = data.length();
	cout << "dataLen: " << dataLen << endl;
	spacesLen = book.getTableWidth() - dataLen;
	cout << "spacesLen: " << spacesLen << endl;
	return (spacesLen);
}

int printField(PhoneBook book, string data)
{
	int spacesLen;
	
	spacesLen = checkDataLen(book, data);
	if (spacesLen > 0) //print spaces
	{
		cout << data;
		for (int i = 0; i < spacesLen; i++)
			cout << " "; 
	}
	else if (spacesLen < 0) //truncate string
	{
		data.substr(0, book.getTableWidth() - 1);
		cout << data << ".";
	}
	cout << " | ";
	return (0);
}

int displayTable(PhoneBook book)
{
	int i;
	int index;

	index = indexGetSet(GET);
	cout << "Current index in display: " << index << endl;
	cout << "| index      | first name | last name  | nickname   |\n";
	cout << "| ---------- | ---------- | ---------- | ---------- |\n";
	if (index > 0)
	{
		for (i = 1; i <= index; i++)
		{
			cout << "| " << i;
			printField(book, ""); //with " | "
			printField(book, book.allContacts[i].firstName);
			printField(book, book.allContacts[i].lastName);
			printField(book, book.allContacts[i].nickname);
		}
	}
	else
		return (1);
	return (0);
}

void printCertainInfo(PhoneBook book, int index)
{
	cout << "1) First Name: " << book.allContacts[index].firstName << endl;
	cout << "2) Last Name: " << book.allContacts[index].lastName << endl;
	cout << "3) Nickname:  " << book.allContacts[index].nickname << endl;
	cout << "4) Phone Number: " << book.allContacts[index].phoneNumber << endl;
	cout << "5) Darkest secret: " << book.allContacts[index].darkestSecret << endl;
}

int searchCmd(PhoneBook book)
{
	int index;
	string strIndex;

	if (displayTable(book))
	{
		cout << RED << "The Phone Book is empty!" << DEFAULT << " Add a contact.\n";
		return (0);
	}
	cout << YELLOW << "enter the index: " << DEFAULT;
	cin >> strIndex;

	index = stoi(strIndex);
	//protetct from characters
	try {
        int index = stoi(strIndex);  // This will throw std::invalid_argument
    } catch (const std::invalid_argument& e) {
        std::cout << RED << "Invalid index: " << DEFAULT << e.what() << std::endl;
		return (1);
    } catch (const std::out_of_range& e) {
        std::cout << RED << "Index is out of range: " << DEFAULT << e.what() << std::endl;
		return (1);
    }
	// if (index < 1 && index > getContactsAmount())
	// 	cout << RED "Invalid index!\n" << DEFAULT;
	// else
		printCertainInfo(book, index);
	return (0);
}

int exitCmd()
{
	//free all
	cout << GREEN << "Program successfully exited.\n" << DEFAULT;
	exit (0);
}