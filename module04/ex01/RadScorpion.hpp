/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 11:04:13 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/30 11:09:17 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:
    RadScorpion();
public:
    RadScorpion(int hp, const std::string &type);
    RadScorpion(const RadScorpion &radScorpion);
    virtual ~RadScorpion();
    RadScorpion &operator=(const RadScorpion &radScorpion);

    void takeDamage(int damage);
};

#endif 