/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:14:31 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/01 18:35:48 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <fstream>
#include <string>
#include "Form.hpp"
class Form;

class Bureaucrat 
{
	private:
		std::string name;
		int grade; //change to const!!!
	public:
		Bureaucrat(const std::string newName, int newGrade);
		Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat& operator=(const Bureaucrat &other);
		~Bureaucrat();
		const std::string getName();
		const int getGrade() const;
		// int setGrade(int newGrade);
		void GradeTooHighException(int newGrade);
		void GradeTooLowException(int newGrade);
		void  incrementGrade();
		void  decrementGrade();
		void signForm(Form& f);
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& b);

#endif