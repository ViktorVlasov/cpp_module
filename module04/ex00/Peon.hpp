/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 12:27:14 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/29 23:37:00 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
private:
    Peon();
public:
    Peon(std::string name);
    Peon(const Peon &peon);
    virtual ~Peon();

    Peon &operator=(const Peon &peon);
	void getPolymorphed(void) const;
};

#endif