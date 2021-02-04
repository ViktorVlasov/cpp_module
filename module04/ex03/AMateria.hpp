/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:54:40 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/03 17:23:17 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
private:
    std::string _type;
    unsigned int _xp;
    AMateria();
public:
    AMateria(const std::string &type);
	AMateria(const AMateria &amateria);
    virtual ~AMateria();
    AMateria& operator=(const AMateria &amateria);

    const std::string &getType() const;
    unsigned int getXP() const;
    
    virtual void use(ICharacter &target);
    virtual AMateria* clone() const = 0;
};


#endif