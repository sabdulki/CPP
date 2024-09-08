/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:08:47 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/08 16:54:48 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define YELLOW "\033[33m"
#define RED "\033[31m"
#define DEFAULT "\033[0m"

class ClapTrap {
	protected:
		std::string name;
		int hitPoints;    //represent the health of the ClapTrap
		int energyPoints;
		int attackDamage;
	public:
	//default constructor
		ClapTrap();
	//param constructor
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
		std::string getName();
		void printState();
		void printWarning(char flag, std::string message);
};

void printWarning(char flag, std::string message);

#endif