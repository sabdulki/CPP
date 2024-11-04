/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:46:20 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/04 14:10:54 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
	std::string str;
	uintptr_t result;
	Data* dataPtr = nullptr;
	Data* newData = nullptr;

	str = "example1";
	Data example(str, 1, 0.5f);

	std::cout << "Before serialization:\n";
	dataPtr = &example;
	std::cout << "pointer: " << dataPtr << std::endl;
	std::cout << example;

	result = Serializer::serialize(dataPtr);
	std::cout << "unsigned int: " << result << std::endl;
	newData = Serializer::deserialize(result);

	std::cout << "After deserialization:\n";
	std::cout << "pointer: " << newData << std::endl;
	std::cout << *newData;
}
