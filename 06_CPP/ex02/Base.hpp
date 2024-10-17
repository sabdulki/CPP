/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:02:38 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/17 19:04:33 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

/*Virtual Destructor: When a destructor is marked as virtual, 
it ensures that if a derived class object is destroyed through a pointer to the base class, 
the derived class's destructor will also be called. This is crucial in polymorphism, 
as it prevents memory leaks and other issues when dealing with dynamically allocated objects.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base 
{
	public:
		virtual ~Base();
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif