/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:59:32 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/11 17:04:40 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "default.hpp"
class AForm;

class Intern
{
	private:

	public:
		Intern();
		Intern(Intern& other);
		Intern& operator&(Intern& other);
		~Intern();

		AForm* makeForm(std::string formName, std::string target);
};

#endif