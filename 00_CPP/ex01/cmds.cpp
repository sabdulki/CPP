/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmds.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:33:21 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/21 22:29:51 by sabdulki         ###   ########.fr       */
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

void printOption(int index, string message, string whichField)
{
	if (index > 0)
		cout << index << ") " << message;
	else
		cout << message;
	cin >> whichField;
}

int addCmd()
{
	Contact newContact;
	cout << "Please fill 5 fields.\n";

	printOption(1,  "First Name: ", newContact.firstName);
	printOption(2,  "Last Name: ", newContact.lastName);
	printOption(3,  "Nickname: ", newContact.nickname);
	printOption(4,  "Phone Number: ", newContact.phoneNumber);
	printOption(5,  "Darkest secret: ", newContact.darkestSecret);
	//code
	cout << "New contact was successfully added to the Phone Book!\n";
	return (0);
}

int searchCmd()
{
	/* Display the saved contacts as a list of 4 columns: 
	index, first name, last name and nickname */
	return (0);
}

int exitCmd()
{
	//free all
	cout << "Program successfully exited.\n";
	exit (0);
}