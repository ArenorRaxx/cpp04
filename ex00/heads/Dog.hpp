/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:38:28 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/08 13:05:40 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	private:
		/* private members */
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const&);
		Dog &operator = (Dog const&);
	
	//	Methods

		void makeSound(void) const;
};

#endif