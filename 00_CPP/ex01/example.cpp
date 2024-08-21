/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:44:42 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/21 20:27:55 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

class PhoneBook
{
	string nameInClass;
	string colorInClass;
	int yearInClass;
	//all attributes are private here, because I didn't mention the opposite.
	int SomeMethod(int param);
	PhoneBook(string nameParam, string colorParam, int yearParam);
};

int PhoneBook::SomeMethod(int param)
{
	cout << "My method of PhoneBook class" << endl;
	return (param + param);
}

PhoneBook::PhoneBook(string nameParam, string colorParam, int yearParam)
{
	/* я могу даже не обращаться к классу, а просто использовать
	атрибуты класса и присваивать им какие-то значения */
	nameInClass = nameParam;
	colorInClass = colorParam;
	yearInClass = yearParam;
}