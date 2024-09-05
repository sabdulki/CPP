/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:13:09 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/05 16:06:03 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	std::cout << "random chump func called\n";
	Zombie zombie2(name);
	// std::cout << "zombie2 declared in randomChump func has memory address: " << &zombie2 << std::endl;
	zombie2.announce();
	return ;
}

/*
Allocate a zombie on the stack 
when the object has a limited, 
well-defined lifespan, 
typically within a single function 
or block of code. 
The stack is a region of memory 
where objects are automatically managed 
and deallocated when they go out of scope.
*/
