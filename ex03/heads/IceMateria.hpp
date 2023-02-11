/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:35:54 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/09 15:59:48 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICEMATERIA_HPP
# define ICEMATERIA_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class IceMateria: public AMateria
{
	public:
		IceMateria(void);
		IceMateria(IceMateria const&);
		
		IceMateria &operator = (IceMateria const&);
		
		~IceMateria(void);

		void		use(ICharacter&);
		IceMateria*	clone(void) const;
};

#endif