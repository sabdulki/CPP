/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:26:37 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/09 16:04:42 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"


class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &obj);
		const Dog &operator=(const Dog &obj);
		void makeSound(void) const;
		std::string getType(void) const;
};

#endif