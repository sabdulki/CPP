/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:23:56 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/03 17:25:26 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

std::string safeCin(void)
{
	std::string input;
	std::cin >> input;
	if (input[0] == '\0')
		exitCmd();
	return (input);
}

std::string printOption(int index, std::string message)
{
	std::string str;
	int iTry;
	int maxTry;

	iTry = 0;
	maxTry = 3;
	while (iTry < maxTry)
	{
		std::cout << index << ") " << message;
		if (index == 5)
			getline(std::cin, str);
		else
		{
			str = safeCin();
			std::cin.ignore();
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
		return (std::cout << RED << "Failed to fill the field." << DEFAULT << std::endl, "");
	return (str);
}

void printGreeting()
{
	std::cout << "--------------------------------------------------------------------------------------------\n";
	std::cout << "Hello! This is a small phone book. Now it's empty.\n";
	std::cout << "You have " << BOLD_WHITE << "3" << DEFAULT << " options to work with:\n";
	std::cout << "1) Type " << GREEN << "ADD" << DEFAULT << " to find data about specific person.\n";
	std::cout << "2) Type " << GREEN << "SEARCH" << DEFAULT << " to add a contact.\n";
	std::cout << "3) Type " << GREEN << "EXIT" << DEFAULT << " if you want to quit the program.\n";
	std::cout << "Please " << YELLOW << "note " << DEFAULT "that all the contacts will be automatically deleted after quitting.";
	std::cout << " Enjoy!\n";
}

void printWarning()
{
	std::cout << RED << "Wrong command!\n" << DEFAULT;
	std::cout << "Let me remind you that you are allowed to use only ";
	std::cout << "'" << GREEN << "ADD" << DEFAULT << "', ";
	std::cout << "'" << GREEN << "SEARCH" << DEFAULT << "' or ";
	std::cout << "'" << GREEN << "EXIT" << DEFAULT << "'. ";
	std::cout << "Try one of them.\n";
}

int checkOnlyInt(std::string strIndex, std::string errorMsg)
{
	for (int i = 0; i < strIndex.length(); i++)
	{
		if (strIndex[i] < '0' || strIndex[i] > '9')
		{
			std::cout << RED << errorMsg << DEFAULT;
			std::cout << "Can contain only digits. Try again." << std::endl;
			return (1);
		}
	}
	return (0);
}

int checkOnlyChars(std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (!isalpha(str[i]))
		{
			std::cout << RED << "Invalid argument. " << DEFAULT;
			std::cout << "The name can contain only letters. Try again.\n";
			return (1);
		}
	}
	return (0);
}
