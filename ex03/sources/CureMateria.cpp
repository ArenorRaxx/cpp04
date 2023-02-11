/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:49:00 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/09 13:01:16 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/CureMateria.hpp"

CureMateria::CureMateria(void): AMateria("cure")
{
	std::cout << "CureMateria Default constructor.\n";
}

CureMateria::~CureMateria(void)
{
	std::cout << "CureMateria Destructor.\n";
}

CureMateria::CureMateria(CureMateria const &to_copy): AMateria("cure")
{
	std::cout << "CureMateria Copy constructor.\n";
	*this = to_copy;
}

CureMateria &CureMateria::operator = (CureMateria const&)
{
	std::cout << "CureMateria Assignation constructor.\n";
	this->_type = "cure";
	return (*this);
}

void CureMateria::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

CureMateria *CureMateria::clone(void) const
{
	return (new CureMateria());
}
