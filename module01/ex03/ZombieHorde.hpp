/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:13:39 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/12 11:42:45 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <cstdlib>
# include <ctime> 

class ZombieHorde
{
private:
    Zombie *zombArr;
    int size;
public:
    ZombieHorde(int size);
    ~ZombieHorde();
    void announce(void);
};


#endif