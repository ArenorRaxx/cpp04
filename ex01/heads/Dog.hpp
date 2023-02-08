/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:38:28 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/08 15:00:53 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *_brain;
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const&);
		Dog &operator = (Dog const&);
	
	//	Methods

		void makeSound(void) const;
};

#endif