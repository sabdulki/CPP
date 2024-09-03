/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:23:56 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/03 13:20:11 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

string safeCin(void)
{
	string input;
	cin >> input;
	if (input[0] == '\0')
		exitCmd();
	return (input);
}

string printOption(int index, string message)
{
	string str;
	int iTry;
	int maxTry;

	iTry = 0;
	maxTry = 3;
	while (iTry < maxTry)
	{
		cout << index << ") " << message;
		if (index == 5)
			getline(cin, str);
		else
		{
			str = safeCin();
			cin.ignore();
		}
		if (index == 1 || index == 2)
		{
			if (checkOnlyChars(str))
			{
				iTry++; 
				continue ;
			}
		}
		else if (index == 4)
		{
			if (checkOnlyInt(str, "Invalid phone number. "))
			{
				iTry++; 
				continue ;
			}
		}
		break;
	}
	if (iTry == maxTry)
		return (cout << RED << "Failed to fill the field." << DEFAULT << endl, "");
	return (str);
}

void printGreeting()
{
	cout << "--------------------------------------------------------------------------------------------\n";
	cout << "Hello! This is a small phone book. Now it's empty.\n";
	cout << "You have " << BOLD_WHITE << "3" << DEFAULT << " options to work with:\n";
	cout << "1) Type " << GREEN << "ADD" << DEFAULT << " to find data about specific person.\n";
	cout << "2) Type " << GREEN << "SEARCH" << DEFAULT << " to add a contact.\n";
	cout << "3) Type " << GREEN << "EXIT" << DEFAULT << " if you want to quit the program.\n";
	cout << "Please " << YELLOW << "note " << DEFAULT "that all the contacts will be automatically deleted after quitting.";
	cout << " Enjoy!\n";
}

void printWarning()
{
	cout << RED << "Wrong command!\n" << DEFAULT;
	cout << "Let me remind you that you are allowed to use only ";
	cout << "'" << GREEN << "ADD" << DEFAULT << "', ";
	cout << "'" << GREEN << "SEARCH" << DEFAULT << "' or ";
	cout << "'" << GREEN << "EXIT" << DEFAULT << "'. ";
	cout << "Try one of them.\n";
}

int checkOnlyInt(string strIndex, string errorMsg)
{
	for (int i = 0; i < strIndex.length(); i++)
	{
		if (strIndex[i] < '0' || strIndex[i] > '9')
		{
			cout << RED << errorMsg << DEFAULT;
			cout << "Can contain only digits. Try again." << endl;
			return (1);
		}
	}
	return (0);
}

int checkOnlyChars(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (!isalpha(str[i]))
		{
			cout << RED << "Invalid argument. " << DEFAULT;
			cout << "The name can contain only letters. Try again.\n";
			return (1);
		}
	}
	return (0);
}
