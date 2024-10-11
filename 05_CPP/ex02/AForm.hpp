/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:55:55 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/11 14:15:52 by sabdulki         ###   ########.fr       */
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
		// const std::string type;
	public:
		AForm();
		AForm(const std::string newName, int newSignGrade, int newExecuteGrade);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		virtual ~AForm();
	
		//  const std::string getType() const;
		// virtual std::string getTarget() const;
		const std::string getName() const;
		bool getSignStatus() const;
		const int getSignGrade() const;
		const int getExecuteGrade() const;
		void beSigned(const Bureaucrat& b);
		// virtual void execute(Bureaucrat const & executor) const = 0;
		int execute(Bureaucrat const & executor) const;
		virtual int executeConcreteForm() const = 0;
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
std::ostream& operator<<(std::ostream &os, AForm& f);

#endif