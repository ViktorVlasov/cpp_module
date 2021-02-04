/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 17:23:32 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/03 17:27:04 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP_
# define ICE_HPP_

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &other);
		virtual ~Ice();
		Ice& operator=(const Ice &other);

		virtual AMateria* clone() const;
		virtual void use(ICharacter &target);
};

#endif