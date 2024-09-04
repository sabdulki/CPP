/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:58:22 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/04 11:33:04 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string name;
	public:
		Zombie(std::string newName);
		~Zombie();
		void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif