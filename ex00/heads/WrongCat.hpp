/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:37:43 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/08 13:01:51 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:
		/* private members */
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(WrongCat const&);
		WrongCat &operator = (WrongCat const&);
	
	//	Methods

		void makeSound(void) const;
};

#endif