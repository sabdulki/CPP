/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:51:58 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/28 14:46:48 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <unistd.h>
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <ctime>

/* Using T::iterator ensures it will be compatible with 
the container type and gives us a uniform way 
to access elements within it.*/
template <typename T>
typename T::iterator easyfind(T& container, int element)
{
	typename T::iterator it = std::find(container.begin(), container.end(), element);
	//std::find is an algorithm from the Standard Template Library (STL) 
	// container.begin(): An iterator pointing to the first element in container.
	// container.end(): An iterator pointing just past the last element of container.
	//returns an iterator to the found element
	// it = std::find(container.begin(), container.end(), element);
	
	/*std::find goes through each element from container.begin() to container.end() and 
	checks if it equals value. It stops searching as soon as it finds a match 
	or reaches container.end().*/
	if (it == container.end())
		throw(std::out_of_range("element is not found"));
	return (it);
}

#endif