/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 11:04:13 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/30 12:08:36 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
    RadScorpion();
    RadScorpion(const RadScorpion &radScorpion);
    virtual ~RadScorpion();
    RadScorpion &operator=(const RadScorpion &radScorpion);

    void takeDamage(int damage);
};

#endif 