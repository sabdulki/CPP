/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:55:55 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/01 18:34:11 by sabdulki         ###   ########.fr       */
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
		std::string name;
		bool isSigned;
		const int formGrade;
		const int requiredGrade;
	public:
		Form(const std::string newName, int newGrade, int newRequiredGrade);
		~Form();
		const std::string getName();
		bool getSign();
		const int getFormGrade();
		const int getRequiredGrade();
		void GradeTooHighException(int newGrade);
		void GradeTooLowException(int newGrade);
		void beSigned(const Bureaucrat& b);
};		
std::ostream& operator<<(std::ostream &os, Form& f);

#endif