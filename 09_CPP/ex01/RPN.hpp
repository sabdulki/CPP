/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:41:36 by sabdulki          #+#    #+#             */
/*   Updated: 2024/12/06 14:23:22 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

# include <stack>
# include <list>
# include <sstream>
# include <iostream>

class RPN
{
	private:
		std::stack<float> _stack;
		std::list<char> _tokens;
	public:
		RPN();
		RPN(const RPN &other);
		const RPN &operator=(const RPN &other);
		~RPN();

		void readInput(const std::string &str);
		float doEquasions(void);
		float calculate(float a, float b, char ch);
};

#endif