/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:02:41 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/08 18:59:09 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm> // For std::sort
#include <vector>
// #include <random>

class Span
{
	private:
		unsigned int _size;
		int currentIndex;
		int* _array;
	public:
	Span(unsigned int N);
	Span(const Span& other);
	Span& operator=(const Span& other);
	~Span();

	int* getArray() const;
	unsigned int getSize() const;
	unsigned int getCurrentIndex() const;
	unsigned int setCurrentIndex();
	
	int operator[](unsigned int index) const;
	void addNumber(int number);
	void randomlyFill();
	int shortestSpan();
	int longestSpan();
};

std::ostream& operator<<(std::ostream& os, Span& obj);

#endif