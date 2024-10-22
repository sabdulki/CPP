/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:19:04 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/22 13:50:51 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

int main()
{
	int* a = new int(); // then display *a.
	std::cout << *a;
	

	try
	{
		/* When accessing an element with the [ ] operator, if its index is out of bounds, an
		std::exception is thrown.*/	
	}
	catch (std::exception& e)
	{
		std::cout << "Exception occured: " << e.what() << std::endl;
	}
}
