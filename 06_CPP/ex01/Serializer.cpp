/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:46:17 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/17 17:16:59 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/*uintptr_t is an unsigned integer type that is capable of holding a pointer, 
meaning it can store the numerical value of a pointer without loss of data.*/

//It takes a pointer and converts it to the unsigned integer type uintptr_t.
uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t res = reinterpret_cast<uintptr_t>(ptr);
	return (res);
}
//It takes an unsigned integer parameter and converts it to a pointer to Data.
Data* Serializer::deserialize(uintptr_t raw)
{
	Data* res = reinterpret_cast<Data*>(raw);
	return (res);
}
