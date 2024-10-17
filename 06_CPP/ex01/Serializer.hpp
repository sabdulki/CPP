/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:46:15 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/17 17:13:43 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

// #include <fstream>
#include <iostream>
// #include <limits>
// #include <cstdlib>
// #include <cmath>
// #include <iomanip>
#include <cstdint>

#include "Data.hpp"

class Serializer 
{
	private:
		Serializer();
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif