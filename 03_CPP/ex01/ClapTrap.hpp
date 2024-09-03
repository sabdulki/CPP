/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:08:47 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/03 17:08:52 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define YELLOW "\033[33m"
#define DEFAULT "\033[0m"

class ClapTrap {
	private:
		std::string name;
		int hitPoints; //represent the health of the ClapTrap
		int energyPoints;
		int attackDamage;
	public:
	//default constructor
		ClapTrap();
		ClapTrap(std::string newName);
	//copy constructor
		ClapTrap(const ClapTrap& other);
	//copy assignment operator overload
		ClapTrap& operator=(const ClapTrap& other);
	//destructor
		~ClapTrap();
	//methods
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void printState();
};

void printWarning(char flag, std::string message);

#endif