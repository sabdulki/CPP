/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:14:31 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/07 15:19:50 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <fstream>
#include <exception>

class Bureaucrat 
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string newName, int newGrade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat& operator=(const Bureaucrat &other);
		~Bureaucrat();
		const std::string getName();
		int getGrade();
		void  incrementGrade();
		void  decrementGrade();
    	class GradeTooHighException: public std::exception
		{
			public:
				GradeTooHighException(const char *str):_msg(str) { }
				const char *what() const throw() { return _msg; }
			private:
				const char *_msg;	
		};
		class GradeTooLowException: public std::exception
		{
			public:
				GradeTooLowException(const char *str):_msg(str) { }
				const char *what(void) const throw() { return _msg; }
			private:
				const char *_msg;	
		};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& b);

#endif