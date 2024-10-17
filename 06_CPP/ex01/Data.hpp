/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:12:02 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/17 17:22:51 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

struct Data 
{
	std::string str;
	int integer;
	float f;

	Data(const std::string& s, int _integer, float _f);
};

std::ostream& operator<<(std::ostream& os, const Data& data);

#endif