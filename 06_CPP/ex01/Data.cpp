/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:12:12 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/17 17:23:53 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(const std::string& s, int _integer, float _f) : str(s), integer(_integer), f(_f) {}

std::ostream& operator<<(std::ostream& os, const Data& data)
{
	os << data.str << std::endl;
	os << data.integer << std::endl;
	os << data.f << std::endl;
	return (os);
}
