/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 00:03:58 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/25 15:39:59 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* std::list<>
if number - push to stack
if operator - do the operation with 2 last numbers in stack 
	pop() last one, pop() first one, do operation, push() the result of operation back to stack
if no 2 numbers -> error or take the closest?
if too many operators - (operator more than numbers(?)) -> error

if number greater than 10 -> error
if {} or other brakets/character -> error
*/

#include "RPN.hpp"

int main(int argc, char **argv) 
{
	if (argc !=2) {
		std::cout << "Error: should take a single string_argument" << std::endl;
		return 1;
	}
	RPN rpn;
	rpn.readString(argv[1]);
	try {
		std::cout << rpn.rpnEval() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}