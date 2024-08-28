/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 01:08:35 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/29 01:44:37 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
#include <fstream>
using namespace std;




class Harl {
	
	void debug( void );
 	void info( void );
 	void warning( void );
 	void error( void );

	public:
		void complain( std::string level );

};


#endif // !HARL_HPP