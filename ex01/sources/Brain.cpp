/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:52:50 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/08 15:10:40 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default constructor.\n";
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor.\n";
}

Brain::Brain(Brain const &to_copy)
{
	std::cout << "Brain Copy constructor.\n";
	*this = to_copy;
}

Brain &Brain::operator = (Brain const &to_set_to)
{
	std::cout << "Brain Assignation constructor.\n";
	for (int i = 0; i < 100 && !to_set_to._ideas[i].empty(); i++)
		this->_ideas[i] = to_set_to._ideas[i];
	return (*this);
}
