/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:36:25 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/10 21:31:16 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

/* COLORS */
#define BOLD_WHITE "\033[1;37m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define DEFAULT "\033[0m"

class Animal 
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal &obj);
		const Animal &operator=(const Animal &obj);
		virtual ~Animal();
	
		virtual std::string getType(void) const;
		void setType(const std::string);
		virtual void makeSound(void) const;
};

#endif
