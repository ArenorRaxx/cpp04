/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:45:21 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/08 13:03:49 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/Animal.hpp"

Animal::Animal(void): type("Animal")
{
	std::cout << "Animal Default constructor.\n";
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor.\n";
}

Animal::Animal(Animal const &to_copy)
{
	std::cout << "Animal Copy constructor.\n";
	*this = to_copy;
}

Animal &Animal::operator = (Animal const &to_set_to)
{
	std::cout << "Animal Assignation constructor.\n";
	this->type = to_set_to.type;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "Grmblpkfff...\n";
}

std::string const &Animal::getType(void) const
{
	return (this->type);
}
