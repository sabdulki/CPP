/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:54:20 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/09 16:54:46 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain 
{
	private:
		const static int numOfIdeas = 100;
		std::string _ideas[numOfIdeas];
		int _lastIdeaIndex;
	public:
		Brain();
		~Brain();
		Brain(const Brain &obj);
		const Brain &operator=(const Brain &obj);
		const std::string &getIdea(int index = numOfIdeas) const;
		void addIdea(const std::string idea);
		void changeIdea(const std::string &idea, const int index);
		int getLastIdeaIndex(void) const;
	
};

#endif