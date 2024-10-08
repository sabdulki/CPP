/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:06:10 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/08 13:09:35 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <fstream>
#include <string>
#include "AForm.hpp"
class AForm;

class RobotomyRequestForm : public AForm
{
	private:
		const int signGrade = 72;
		const int executeGrade = 45;
		std::string target;
	public:
		RobotomyRequestForm(std::string _target);
		RobotomyRequestForm(RobotomyRequestForm& other);
		RobotomyRequestForm& operator=(RobotomyRequestForm& other);
		~RobotomyRequestForm();

		
};

#endif