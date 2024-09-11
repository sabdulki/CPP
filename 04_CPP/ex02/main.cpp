/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:37:03 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/11 11:42:31 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void subjectTest()
{
	std::cout << "----------------- mandatory test -----------------\n";
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	j->makeSound();
	i->makeSound();
	delete j; //should not create a leak
	delete i;
}

void arrayTest()
{
	std::cout << "----------------- array test -----------------\n";
	int animalAmount = 10;
	Animal *arr[animalAmount];
	for (int i = 0; i < animalAmount; i++)
	{
		std::cout << i << ":\t";
		if (i % 2 == 0)
			arr[i] = new Cat();
		else
			arr[i] = new Dog();
	}
	std::cout << "----------------- array filled -----------------\n";

	for (int i = 0; i < animalAmount; i++)
	{
		std::cout << i << ":\t";
		delete arr[i];
	}
	std::cout << "----------------- array delited -----------------\n";
	
}

void deepCopyTest()
{
	std::cout << "----------------- deepCopy test -----------------\n";
	
	Dog basic;
	{
		Dog tmp = basic;
		std::cout << "\ttmp    :" << tmp.getBrain() << std::endl;
		std::cout << "\tbasic1 :" << basic.getBrain() << std::endl;
	}
	std::cout << "\tbasic2  :" << basic.getBrain() << std::endl;

}

void deleteTest()
{
	const Cat *cat2 = new Cat();
	delete cat2;
}

int main (void)
{
	subjectTest();
	// arrayTest();
	// deepCopyTest();
	// deleteTest();
	
	// std::cout << "----------------- external tests -----------------\n";

	std::cout << "-----------------------------------------------------" << std::endl;
	// oldMainTest();
}