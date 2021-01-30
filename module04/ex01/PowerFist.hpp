/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 10:24:41 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/30 10:25:20 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
    PowerFist();
public:
    PowerFist(const std::string &name, int apcost, int damage);
    PowerFist(const PowerFist &powerFist);
    virtual ~PowerFist();
    PowerFist &operator=(const PowerFist &powerFist);
    
    void attack() const;
};

#endif