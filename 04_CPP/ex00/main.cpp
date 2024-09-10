/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:34:50 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/10 17:17:13 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void subjectTests()
{
	std::cout << "----------------- mandatory tests -----------------\n";
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete j;
	delete i;
	delete meta;
}

void externalTests()
{
	std::cout << "----------------- external tests -----------------\n";
	const WrongAnimal *meta = new WrongAnimal();
	const WrongAnimal *wrongKitty = new WrongCat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << wrongKitty->getType() << " " << std::endl;
	wrongKitty->makeSound();
	meta->makeSound();

	delete wrongKitty;
	delete meta;
}

int main()
{
	subjectTests();
	externalTests();
	return 0;
}