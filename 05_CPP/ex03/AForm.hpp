/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:55:55 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/01 16:24:44 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "default.hpp"
#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
	private:
		bool isSigned;
		const std::string name;
		const int signGrade;
		const int executeGrade;
	public:
		AForm();
		AForm(const std::string newName, int newSignGrade, int newExecuteGrade);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		virtual ~AForm();
	
		const std::string getName() const;
		bool getSignStatus() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		void beSigned(const Bureaucrat& b);
		int execute(Bureaucrat const & executor) const;
		virtual int executeConcreteForm() const = 0;
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
		class EmptyString: public std::exception
		{
			public:
				EmptyString(const char *str);
				const char *what(void) const throw();
			private:
				const char *_msg;	
		};
		class InvalidForm: public std::exception
		{
			public:
				InvalidForm(const char *str);
				const char *what(void) const throw();
			private:
				const char *_msg;	
		};
};		
std::ostream& operator<<(std::ostream &os, AForm& f);

#endif