/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:52:01 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/08 13:03:33 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/Cat.hpp"

Cat::Cat(void): Animal()
{
	std::cout << "Cat Default constructor.\n";
	this->type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor.\n";
}

Cat::Cat(Cat const &to_copy): Animal(to_copy)
{
	std::cout << "Cat Copy constructor.\n";
	*this = to_copy;
}

Cat &Cat::operator = (Cat const &to_set_to)
{
	std::cout << "Cat Assignation constructor.\n";
	this->type = to_set_to.type;
	return (*this);
}

//	Methods

void Cat::makeSound(void) const
{
	std::cout << "Meow meow...\n";
}
