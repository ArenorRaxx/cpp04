/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:45:17 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/09 16:04:56 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria Default constructor.\n";
}

AMateria::AMateria(AMateria const &to_copy)
{
	std::cout << "AMateria Copy constructor.\n";
	*this = to_copy;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria Type " << type << " constructor.\n";
	this->_type = type;
}

AMateria &AMateria::operator = (AMateria const&)
{
	std::cout << "AMateria Assignation constructor.\n";
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria Destructor.\n";
}

std::string const &AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter&)
{
}
