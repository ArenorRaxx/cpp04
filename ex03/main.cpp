/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:23:55 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/09 16:14:53 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heads/IceMateria.hpp"

int main(void)
{
	IceMateria	ice;
	AMateria	*new_ice = ice.clone();
	AMateria	*bis_new_ice = &*new_ice;

	std::cout << ice.getType() << '\n';

	std::cout << "\t----\n";

	new_ice = ice.clone();
	std::cout << new_ice->getType() << '\n';
	
	std::cout << "\t----\n";
	
	std::cout << bis_new_ice->getType() << '\n';
	
	std::cout << "\t----\n";
	
	delete new_ice;
}
