/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:33:22 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/17 19:06:19 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base* generatedPtr;
	generatedPtr = generate();
	identify(generatedPtr);
	Base& ref = *generatedPtr;
	identify(ref);

	delete generatedPtr;
}
