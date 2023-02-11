/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:24:19 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/09 16:03:47 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria;

#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria(void);
		AMateria(AMateria const&);
		AMateria(std::string const&);
		
		AMateria &operator = (AMateria const&);
		
virtual	~AMateria(void);

		std::string	const&	getType(void) const;

virtual	AMateria*			clone(void) const = 0;
virtual	void				use(ICharacter&);
};

#endif