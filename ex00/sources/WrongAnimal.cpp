/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal copy.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:45:21 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/08 14:33:02 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("WrongAnimal")
{
	std::cout << "WrongAnimal Default constructor.\n";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor.\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &to_copy)
{
	std::cout << "WrongAnimal Copy constructor.\n";
	*this = to_copy;
}

WrongAnimal &WrongAnimal::operator = (WrongAnimal const &to_set_to)
{
	std::cout << "WrongAnimal Assignation constructor.\n";
	this->type = to_set_to.type;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Grmblpkfff...\n";
}

std::string const &WrongAnimal::getType(void) const
{
	return (this->type);
}
