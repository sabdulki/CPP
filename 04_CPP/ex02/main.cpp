/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:37:03 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/10 21:45:32 by sabdulki         ###   ########.fr       */
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

void deepCopyTests()
{
	std::cout << "----------------- deepCopy test 1 -----------------\n";
	Cat kitty1 = Cat();
	std::cout << "\tcat1 brain: " << kitty1.getBrain() << std::endl;
	Cat kitty2 (kitty1);
	std::cout << "\tcat2 brain: " << kitty2.getBrain() << std::endl;


	std::cout << "----------------- deepCopy test 2 -----------------\n";
	
	const Cat *Dexter1 = new Cat();
	Dexter1->getBrain()->addIdea("I am so hungry....");

	Cat Dexter2(*Dexter1);

	std::cout << "Dexter2 Idea : " << Dexter2.getBrain()->getIdea() << std::endl;
	delete Dexter1;
	std::cout << "Dexter2 Idea after deleting original source: " << Dexter2.getBrain()->getIdea() << std::endl;
	

	std::cout << "----------------- deepCopy test 3 -----------------\n";

	const Cat *cat1 = new Cat();
	cat1->getBrain()->addIdea("I am so hungry....");

	Cat copiedCat, newCat (*cat1);
	copiedCat.getBrain()->addIdea("I'd catch a mouse!");
	copiedCat.getBrain()->addIdea("I'd have some fish!");

	Cat cat2(copiedCat);
	const Cat *cat3 = new Cat(copiedCat);
	newCat = copiedCat;

	copiedCat.getBrain()->addIdea("KityCat is good too......");

	std::cout << "A Idea: " << copiedCat.getBrain()->getIdea() << std::endl;
	std::cout << "B Idea: " << cat2.getBrain()->getIdea() << std::endl;
	std::cout << "C Idea: " << newCat.getBrain()->getIdea() << std::endl;
	std::cout << "D Idea: " << cat3->getBrain()->getIdea() << std::endl;

	delete cat1;
	delete cat3;
	
}

void deleteTest()
{
	const Cat *cat2 = new Cat();
	delete cat2;
}

void oldMainTest()
{
	const Cat *i = new Cat();
	const Cat *j = new Cat();
	delete j;
	i->getBrain()->addIdea("I am so hungry....");

	Cat a, c, e(*i);

	std::cout << "E_1 Idea: " << e.getBrain()->getIdea() << std::endl;
	delete i;
	std::cout << "E_2 Idea: " << e.getBrain()->getIdea() << std::endl;
	a.getBrain()->addIdea("Mouuusee");
	a.getBrain()->addIdea("Fiiiish");

	Cat b(a);
	const Cat *d = new Cat(a);
	c = a;

	a.getBrain()->addIdea("Whiskaaaas");

	std::cout << "A Idea: " << a.getBrain()->getIdea() << std::endl;
	std::cout << "B Idea: " << b.getBrain()->getIdea() << std::endl;
	std::cout << "C Idea: " << c.getBrain()->getIdea() << std::endl;
	std::cout << "D Idea: " << d->getBrain()->getIdea() << std::endl;

	delete d;

	std::cout << "-----------------------------------------------------" << std::endl;

	Animal *arr[10];
	for(int i = 0; i < 5; i++)
		arr[i] = new Cat();
	for(int i = 5; i < 10; i++)
		arr[i] = new Dog();
	for (int i = 0; i < 10; i++)
		delete arr[i];
}

int main (void)
{
	// subjectTest();
	// arrayTest();
	deepCopyTests(); //leak!!!!
	// deleteTest();
	
	// std::cout << "----------------- external tests -----------------\n";

	std::cout << "-----------------------------------------------------" << std::endl;
	// oldMainTest();
}