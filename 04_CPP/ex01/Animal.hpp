/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:36:25 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/09 16:45:30 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal 
{
	protected:
		void setType(const std::string);
		std::string _type;
	public:
		Animal();
		Animal(const Animal &obj);
		virtual ~Animal();
		const Animal &operator=(const Animal &obj);
		virtual std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif
