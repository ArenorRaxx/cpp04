/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:40:11 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/09 12:44:45 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_inventory[4];
	public:
		Character(void);
		Character(Character const&);
		
		Character &operator = (Character const&);
		
		~Character(void);

		void				unequip(int);
		void				equip(AMateria*);
		void				use(int, ICharacter&);
		std::string const	&getName() const;
};

#endif