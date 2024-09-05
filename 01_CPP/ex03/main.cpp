/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:01:33 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/05 16:24:48 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• While HumanA takes the Weapon in its constructor, HumanB doesn’t.
• HumanB may not always have a Weapon, whereas HumanA will always be armed.

So, it means that Human A always has an access to the Weapon class.
You always has an access to smth if you have a reference to it,
because refernce always contain a valid value, it cannot contain NULL.

Whereas Himan B might not have a Weapon at first, so it doesn't have an access
to it every time, right? It means that Weapon could be NULL, so Human B will have
a pointer to Weapon.
HumanB uses a pointer to Weapon so that it can handle cases 
where it might not have a weapon initially, 
and we check if weapon is null before trying to attack.
*/

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		std::cout << "\t--- Bob ---\n";
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		std::cout << "\t--- Jim ---\n";
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}