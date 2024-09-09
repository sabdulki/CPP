/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:54:20 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/09 16:54:57 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{	
	private:
		Brain *_brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &obj);
		const Cat &operator=(const Cat &obj);
		void makeSound(void) const;

	// getters:
		std::string getType(void) const;
		Brain *getBrain(void) const;
	
};

#endif