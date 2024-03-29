/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 00:01:55 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/03 15:18:33 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

class Squad: public ISquad
{
private:
	int count;
	ISpaceMarine **arr_units;
public:
	Squad();
	Squad(const Squad &squad);
	virtual ~Squad();
	Squad &operator=(const Squad &squad);

	int getCount(void) const;
	ISpaceMarine *getUnit(int n) const;
	int push(ISpaceMarine *unit);
};

#endif