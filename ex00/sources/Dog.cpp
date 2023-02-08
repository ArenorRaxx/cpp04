/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:54:29 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/08 13:03:36 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/Dog.hpp"

Dog::Dog(void): Animal()
{
	std::cout << "Dog Default constructor.\n";
	this->type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor.\n";
}

Dog::Dog(Dog const &to_copy): Animal(to_copy)
{
	std::cout << "Dog Copy constructor.\n";
	*this = to_copy;
}

Dog &Dog::operator = (Dog const &to_set_to)
{
	std::cout << "Dog Assignation constructor.\n";
	this->type = to_set_to.type;
	return (*this);
}

//	Methods

void Dog::makeSound(void) const
{
	std::cout << "Woof woof...\n";
}
