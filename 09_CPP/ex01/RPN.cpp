/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:41:21 by sabdulki          #+#    #+#             */
/*   Updated: 2024/12/02 18:12:28 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() { }

RPN::~RPN() { }

RPN::RPN(const RPN &other)
{
	if (this != &other) {
		*this = other;
	}
}

const RPN &RPN::operator=(const RPN &other)
{
	if (this != &other) {
		this->_stack = other._stack;
	}
	return *this;
}

void RPN::readInput(const std::string &str)
{
	std::istringstream iss(str);
	char a;
	while (iss >> a)
		_tokens.push(a);
}

float RPN::doEquasions(void)
{
	float result = 0.0f;
	while (!_tokens.empty()) {
		char ch = _tokens.front();
		_tokens.pop();
		if (ch == '+' || ch == '-' || ch == '*' || ch == '/') 
		{
			if (_stack.empty())
				throw(std::runtime_error("Error: not a RPN sequence"));
			float b = _stack.top();	
			_stack.pop();
			if (_stack.empty())
				throw(std::runtime_error("Error: not a RPN sequence"));
			float a = _stack.top();
			_stack.pop();
			result = calculate(a, b, ch);
			_stack.push(result);
		} else if (ch == '(' || ch == ')') {
			throw(std::runtime_error("Error"));
		} else {
			_stack.push(ch - '0');
		}
	}	
	return result;
}

float RPN::calculate(float a, float b, char ch) 
{
	if (ch == '+')
		return a + b;
	if (ch == '-')
		return a - b;
	if (ch == '*')
		return a * b;
	if (ch == '/')
		return a / b;
	return 0.0f;
}