/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:17:20 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/03 21:00:29 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string newName);
		ScavTrap(ScavTrap& other);
		ScavTrap& operator=(ScavTrap& other);
		~ScavTrap();
	
		void guardGate();
		void attack(const std::string& target);
};


#endif