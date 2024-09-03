/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:15:31 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/03 13:17:05 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
using namespace std;

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
};

#endif