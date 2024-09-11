/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:36:31 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/11 13:10:49 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

/* COLORS */
#define BOLD_WHITE "\033[1;37m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define DEFAULT "\033[0m"

class Brain 
{
	private:
		const static int IdeasAmount = 100;
		std::string ideas[IdeasAmount];
	public:
		Brain();
		Brain(const Brain &obj);
		const Brain &operator=(const Brain &obj);
		~Brain();
};

#endif