/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:36:06 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/10 20:54:46 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* -------------- Orthodox Canonical Form -------------- */

Brain::Brain(): _lastIdeaIndex(-1)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = obj;
}

const Brain &Brain::operator=(const Brain &obj)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &obj) {
		this->_lastIdeaIndex = obj._lastIdeaIndex;
		for (int i = 0; i <= _lastIdeaIndex; i++)
			this->_ideas[i] = obj._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

/* -------------- Methods -------------- */

/// @brief Returns the idea, which is under a specific index in the array of ideas
/// @return 
const std::string &Brain::getIdea(int index) const
{
	std::cout << YELLOW << "Brain getIdea(" << index << ") called" << DEFAULT << std:: endl;
	if (index >= 0 && index < IdeasAmount) {
		return this->_ideas[index];
	} else if (_lastIdeaIndex > 0)
		return this->_ideas[this->_lastIdeaIndex];
	return this->_ideas[0];
}

void Brain::addIdea(const std::string idea)
{
	std::cout << GREEN << "Brain addIdea(" << idea << ") function called" << DEFAULT << std::endl;
	if (!idea.empty() && _lastIdeaIndex < IdeasAmount) {
		this->_ideas[++this->_lastIdeaIndex] = idea;
	}
}

void Brain::changeIdea(const std::string &idea, const int index)
{
	if (index >= 0 && index <= this->_lastIdeaIndex) {
		this->_ideas[index] = idea;	
	}
}

int Brain::getLastIdeaIndex(void) const
{
	return _lastIdeaIndex;
}