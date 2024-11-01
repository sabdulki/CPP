/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormsStruct.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:43:57 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/01 16:48:25 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMSSTRUCT_HPP
#define FORMSSTRUCT_HPP

#include "default.hpp"
#include "Intern.hpp"
class Intern;
class AForm;

struct FormsStruct 
{
	std::string formName;
	AForm* (Intern::*createForm)(std::string&);  // Pointer to member function

	FormsStruct() {};
	FormsStruct(std::string name, AForm* (Intern::*func)(std::string&))
        : formName(name), createForm(func) {}
};

#endif