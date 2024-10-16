/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:11:22 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/11 13:49:38 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "default.hpp"
#include "AForm.hpp"
class AForm;

class PresidentialPardonForm : public AForm
{
	private:
		// const int signGrade; // = 25;
		// const int executeGrade; // = 5;
		std::string target;
	public:
		PresidentialPardonForm(std::string _target);
		PresidentialPardonForm(PresidentialPardonForm& other);
		PresidentialPardonForm& operator=(PresidentialPardonForm& other);
		~PresidentialPardonForm();

		std::string getTarget() const;
		int executeConcreteForm() const;
};

#endif