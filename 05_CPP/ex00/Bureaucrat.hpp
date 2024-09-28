/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:14:31 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/28 20:54:17 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat 
{
	private:
		std::string name;
		int grade;
	public:
		Bureaucrat(const std::string newName, int newGrade);
		Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat& operator=(const Bureaucrat &other);
		~Bureaucrat();
		const std::string getName();
		int getGrade();
		// int setGrade(int newGrade);
		void GradeTooHighException(int newGrade);
		void GradeTooLowException(int newGrade);
		void  incrementGrade();
		void  decrementGrade();
};


#endif