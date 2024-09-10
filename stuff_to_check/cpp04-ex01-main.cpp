/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp04-ex01-main.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:37:03 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/10 20:02:31 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// void subjectTest()
// {
// 	std::cout << "----------------- mandatory test -----------------\n";
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	delete j; //should not create a leak
// 	delete i;
// }

/*
have to learn how to make arrayTest function work without leaks and segfaults.
*/

void arrayTest()
{
	std::cout << "----------------- array test -----------------\n";
	int animalAmount = 10;
	Animal* arr = new Animal[animalAmount];
	for (int i = 0; i < animalAmount; i++)
	{
		std::cout << i << ": ";
		if (i % 2 == 0)
			arr[i].setType("Cat");
		else
			arr[i].setType("Dog");
	}
	std::cout << "----------------- array filled -----------------\n";
	// for (int i = 0; i < animalAmount; i++)
	// {
		// std::cout << i << ": ";
		delete &arr[animalAmount];
	// }
	// delete &arr[animalAmount];
	
}

int main (void)
{
	// subjectTest();
	arrayTest();
	
	// std::cout << "----------------- external tests -----------------\n";
	// const Cat *i = new Cat();
	// const Cat *j = new Cat();
	// delete j;
	// i->getBrain()->addIdea("I am so hungry....");

	// Cat a, c, e(*i);

	// std::cout << "E_1 Idea: " << e.getBrain()->getIdea() << std::endl;
	// delete i;
	// std::cout << "E_2 Idea: " << e.getBrain()->getIdea() << std::endl;
	// a.getBrain()->addIdea("Mouuusee");
	// a.getBrain()->addIdea("Fiiiish");

	// Cat b(a);
	// const Cat *d = new Cat(a);
	// c = a;

	// a.getBrain()->addIdea("Whiskaaaas");

	// std::cout << "A Idea: " << a.getBrain()->getIdea() << std::endl;
	// std::cout << "B Idea: " << b.getBrain()->getIdea() << std::endl;
	// std::cout << "C Idea: " << c.getBrain()->getIdea() << std::endl;
	// std::cout << "D Idea: " << d->getBrain()->getIdea() << std::endl;

	// delete d;

// 	std::cout << "-----------------------------------------------------" << std::endl;

// 	Animal *arr[10];
// 	for(int i = 0; i < 5; i++)
// 		arr[i] = new Cat();
// 	for(int i = 5; i < 10; i++)
// 		arr[i] = new Dog();
// 	for (int i = 0; i < 10; i++)
// 		delete arr[i];
}