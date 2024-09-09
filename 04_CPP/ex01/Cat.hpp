/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:36:43 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/09 16:38:29 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &obj);
		const Cat &operator=(const Cat &obj);
		void makeSound(void) const;

	// getters:
		std::string getType(void) const;
		Brain *getBrain(void) const;
	private:
		Brain *_brain;
};

#endif