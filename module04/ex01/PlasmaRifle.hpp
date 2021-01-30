/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 10:11:01 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/30 12:10:24 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
    PlasmaRifle();
    PlasmaRifle(const PlasmaRifle &plasmaRifle);
    virtual ~PlasmaRifle();
    PlasmaRifle &operator=(const PlasmaRifle &plasmaRifle);
    
    void attack() const;
};

#endif