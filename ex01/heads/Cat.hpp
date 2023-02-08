/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:37:43 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/08 15:00:41 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *_brain;
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat const&);
		Cat &operator = (Cat const&);
	
	//	Methods

		void makeSound(void) const;
};

#endif