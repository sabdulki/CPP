/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:55:55 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/01 14:03:36 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <fstream>
#include <string>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	private:
		bool isSigned;
		const std::string name;
		const int signGrade;
		const int executeGrade;
	public:
		Form(const std::string newName, int newSignGrade, int newExecuteGrade);
		Form(const Form& other);
		Form& operator=(const Form& other);
		~Form();
		//getters
		const std::string getName() const;
		bool getSignStatus() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		//other method
		void beSigned(const Bureaucrat& b);
		class GradeTooHighException: public std::exception
		{
			public:
				GradeTooHighException(const char *str);
				const char *what() const throw();
			private:
				const char *_msg;	
		};
		class GradeTooLowException: public std::exception
		{
			public:
				GradeTooLowException(const char *str);
				const char *what(void) const throw();
			private:
				const char *_msg;	
		};
};		
std::ostream& operator<<(std::ostream &os, Form& f);

#endif