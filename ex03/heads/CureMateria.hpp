/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:35:54 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/09 12:37:53 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUREMATERIA_HPP
# define CUREMATERIA_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class CureMateria: public AMateria
{
	public:
		CureMateria(void);
		CureMateria(CureMateria const&);
		
		CureMateria &operator = (CureMateria const&);
		
		~CureMateria(void);

		void		use(ICharacter&);
		CureMateria	*clone(void) const;
};

#endif