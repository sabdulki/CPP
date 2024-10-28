/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:02:41 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/28 16:15:38 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm> // For std::sort
#include <random>

class Span
{
	private:
		int* _array;
		int currentIndex;
		unsigned int _size;
	public:
	Span(unsigned int N);
	Span(const Span& other);
	Span& operator=(const Span& other);
	~Span();

	int* getArray();
	unsigned int getSize();
	unsigned int getCurrentIndex();
	unsigned int setCurrentIndex();
	
	int operator[](unsigned int index);
	void addNumber(int number);
	void fillArray(int n1, int n2);
	int shortestSpan();
	int longestSpan();
};

std::ostream& operator<<(std::ostream& os, Span& obj);

#endif