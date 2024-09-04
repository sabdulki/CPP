/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:13:09 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/04 11:25:18 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	std::cout << "random chump func called\n";
	Zombie zombie2(name);
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
