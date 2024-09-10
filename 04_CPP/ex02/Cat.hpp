/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:36:43 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/10 20:39:18 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const Cat &obj);
		const Cat &operator=(const Cat &obj);
		~Cat();

		void makeSound(void) const;
		std::string getType(void) const;
		Brain *getBrain(void) const;
		// Brain *getBrain(void) const;
	// 	const Brain& getBrain() const{  // Const version for const objects
    //     	return _brain;
    // }
};

#endif