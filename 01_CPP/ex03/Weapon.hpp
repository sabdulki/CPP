/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:02:43 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/24 18:06:53 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Weapon{
	private:
		string type;
	public:
	/* cannot change the var through reference */
		const string& getType() const {
			return (type);
		}
		void setType(string newType) {
			type = newType;
		}
	
}