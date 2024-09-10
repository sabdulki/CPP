/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:36:31 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/10 22:02:52 by sabdulki         ###   ########.fr       */
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
		std::string _ideas[IdeasAmount];
		int _lastIdeaIndex;
	public:
		Brain();
		Brain(const Brain &obj);
		const Brain &operator=(const Brain &obj);
		~Brain();

		const std::string &getIdea(int index = IdeasAmount) const;
		void addIdea(const std::string idea);
		void changeIdea(const std::string &idea, const int index);
		int getLastIdeaIndex(void) const;
};

#endif