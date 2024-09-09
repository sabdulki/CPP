/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:10:23 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/09 16:12:56 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP 
# define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal 
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &obj);
		const WrongAnimal &operator=(const WrongAnimal &obj);
		virtual ~WrongAnimal();
	
		virtual std::string getType(void) const;
		void makeSound(void) const;
		void setType(const std::string);
};

#endif