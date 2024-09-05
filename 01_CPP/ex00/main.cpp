/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:57:48 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/05 15:57:57 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
// #include <cstdint>

// int compareAddresses()
// {
//     uintptr_t newZombieAddr = 0x0;
//     uintptr_t randomChumpAddr = 0x0;
	
// 	std::cout << "Variables addresses from prevoius call of programm:\n";
//     std::cout << "newZombieAddr variable address: " << std::hex << newZombieAddr << std::endl;
//     std::cout << "randomChumpAddr variable address: " << std::hex << randomChumpAddr << std::endl;

//     if (randomChumpAddr > newZombieAddr) {
//         std::cout << "randomChumpAddr address is greater than newZombieAddr address." << std::endl;
//     } else {
//         std::cout << "newZombieAddr address is greater than randomChumpAddr address." << std::endl;
//     }

//     return 0;
// }

int main()
{
	Zombie zombie1("Foo");
	zombie1.announce();
	Zombie* zombie2;
	zombie2 = newZombie("Bob");
	randomChump("Joe");
	
	delete zombie2;

	// compareAddresses();
	return (0);
}


