/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:55:55 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/01 14:49:37 by sabdulki         ###   ########.fr       */
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
		//getters
		const std::string getName() const;
		bool getSignStatus() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		//methods
		void beSigned(const Bureaucrat& b);
		int execute(Bureaucrat const & executor) const;
		virtual int executeConcreteForm() const = 0;
		//exceptions
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
};		
std::ostream& operator<<(std::ostream &os, AForm& f);

#endif