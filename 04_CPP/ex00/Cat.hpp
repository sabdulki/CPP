/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:26:37 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/09 15:50:37 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		std::string type = "Cat";
	public:
		Cat();
		Cat(const Cat &obj);
		const Cat &operator=(const Cat &obj);
		~Cat();
		
		void makeSound(void) const;
		// std::string getType(void) const;
	
};


#endif