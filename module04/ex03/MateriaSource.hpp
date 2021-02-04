/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 17:33:44 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/03 17:36:47 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP_
# define MATERIASOURCE_HPP_

# include "IMateriaSource.hpp"
# include "Character.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_inventory[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &materiaSource);
		virtual ~MateriaSource();
		MateriaSource& operator=(const MateriaSource &materiaSource);

		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const &type);
};

#endif /* MATERIASOURCE_HPP_ */