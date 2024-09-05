/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 01:08:35 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/05 16:37:30 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
	private:
		void debug( void );
 		void info( void );
 		void warning( void );
 		void error( void );

	public:
		Harl();
		~Harl();
		void complain(std::string level);
		std::string* levelsArr;
		int arrSize;
};

#endif