/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:40:01 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/07 22:10:38 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	// T tmp{a};
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T& a, T& b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T max(T& a, T& b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif