/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:58:22 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/24 17:17:21 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cctype>  // For std::toupper
#include <fstream>  // Required for file handling
using namespace std;


class Zombie {
	private:
		string name;
	public:
		Zombie() {}; 
		~Zombie() {};
		void announce(void);
		string getName(void){
			return (name);
		}
		void setName(string newName) {
			name = newName;
		}
};

Zombie* zombieHorde(int N, string name);

#endif