/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 10:43:49 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/30 12:08:47 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
    SuperMutant();
    SuperMutant(const SuperMutant &superMutant);
    virtual ~SuperMutant();
    SuperMutant &operator=(const SuperMutant &superMutant);

    void takeDamage(int damage);
};

#endif 