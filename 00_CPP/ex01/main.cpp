/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:57:44 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/04 14:29:12 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

int suggestACmd(PhoneBook book)
{
	std::string input;

	while (1)
	{
		std::cout << YELLOW << "Enter your comand: " << DEFAULT;
		input = safeCin();
		if (input == "ADD")
			book.addCmd();
		else if (input == "SEARCH")
			book.searchCmd();
		else if (input == "EXIT")
			exitCmd();
		else
			printWarning();
	}
	return (0);
}



int main()
{
	PhoneBook book;
	// test(book);
	printGreeting();
	suggestACmd(book);
	return (0);
}

// PhoneBook& test(PhoneBook& book)
// {
// 	for(int i = 0; i < book.getContactsAmount(); i++)
// 	{
// 		Contact newContact;
// 		if (i == 0)
// 		{
// 			newContact.setField(1, "FIRST");
// 			newContact.setField(2, "FIRST");
// 			newContact.setField(3, "FIRST");
// 			newContact.setField(4, "1");
// 			newContact.setField(5, "FIRST");
// 		}
// 		else if (i == 7)
// 		{
// 			newContact.setField(1, "LAST");
// 			newContact.setField(2, "LAST");
// 			newContact.setField(3, "LAST");
// 			newContact.setField(4, "LAST");
// 			newContact.setField(5, "LAST");
// 		}
// 		else
// 		{
// 			newContact.setField(1, "middle");
// 			newContact.setField(2, "middle");
// 			newContact.setField(3, "middle");
// 			newContact.setField(4, "middle");
// 			newContact.setField(5, "middle");
// 		}
// 		indexGetSet(SET);
// 		book.setContact(newContact, i);
// 	}
// 	return (book);
// }
