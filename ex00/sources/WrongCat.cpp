/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:52:01 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/08 13:03:33 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	std::cout << "WrongCat Default constructor.\n";
	this->type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor.\n";
}

WrongCat::WrongCat(WrongCat const &to_copy): WrongAnimal(to_copy)
{
	std::cout << "WrongCat Copy constructor.\n";
	*this = to_copy;
}

WrongCat &WrongCat::operator = (WrongCat const &to_set_to)
{
	std::cout << "WrongCat Assignation constructor.\n";
	this->type = to_set_to.type;
	return (*this);
}

//	Methods

void WrongCat::makeSound(void) const
{
	std::cout << "Meow meow...\n";
}
