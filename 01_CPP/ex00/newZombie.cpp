/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:08:29 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/04 11:25:47 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
it's a function, it creates local variables. 
if i need to use these variables outside this func,
i need to allocare memory for them (Zombie zombie1).
позволяет объекту zombie1 продолжать существовать 
даже после завершения работы функции newZombie.
*/

Zombie* newZombie(std::string name)
{
	std::cout << "new zombie func called\n";
	Zombie* zombie1 = new Zombie(name);
	return (zombie1);
}

/*
Allocate a zombie on the heap 
when the object needs to persist beyond the scope 
in which it was created. This is typical 
when the object needs to be accessed or modified 
outside of its creation function, 
or when its lifetime isn't tied 
to a particular function.
*/
