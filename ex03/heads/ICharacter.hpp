/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:28:30 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/09 15:55:29 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <string>
#include "AMateria.hpp"

class ICharacter
{
	public:
		virtual ~ICharacter();
		virtual std::string const& getName() const = 0;
		virtual void equip(AMateria*) = 0;
		virtual void unequip() = 0;
		virtual void use(int, ICharacter&) = 0;
};

#endif
