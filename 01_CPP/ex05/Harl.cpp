/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 01:08:32 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/29 17:07:43 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() 
{
	arrSize = 4;
	levelsArr = new string[arrSize];
	levelsArr[0] = "DEBUG";
	levelsArr[1] = "INFO";
	levelsArr[2] = "WARNING";
	levelsArr[3] = "ERROR";
}

Harl::~Harl() 
{
	delete[] levelsArr;
}

void Harl::debug( void )
{
	cout << "Debug message\n";
}

void Harl::info( void )
{
	cout << "Info message\n";
}

void Harl::warning( void )
{
	cout << "Warning message\n";
}

void Harl::error( void )
{
	cout << "Error message\n";
}

void Harl::complain(string level)
{
	// create arr of pointers to strings
	void (Harl::*pointersToFuncs[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	
	for (int i = 0; i < this->arrSize; i++)
	{
		if (level == this->levelsArr[i])
		{
			(this->*pointersToFuncs[i])();
			return ;
		}
	}
	cout << "Wrong type\n";
	
	return ;
}
