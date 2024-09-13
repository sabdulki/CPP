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