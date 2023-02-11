/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:49:00 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/09 16:07:45 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/IceMateria.hpp"

IceMateria::IceMateria(void): AMateria("ice")
{
	std::cout << "IceMateria Default constructor.\n";
}

IceMateria::~IceMateria(void)
{
	std::cout << "IceMateria Destructor.\n";
}

IceMateria::IceMateria(IceMateria const &to_copy): AMateria("ice")
{
	std::cout << "IceMateria Copy constructor.\n";
	*this = to_copy;
}

IceMateria &IceMateria::operator = (IceMateria const&)
{
	std::cout << "IceMateria Assignation constructor.\n";
	return (*this);
}

void IceMateria::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

IceMateria *IceMateria::clone(void) const
{
	std::cout << "IceMateria cloned.\n";
	return (new IceMateria());
}
