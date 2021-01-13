/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:36:21 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/13 11:49:18 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <cstdlib>
# include <ctime> 

class ZombieEvent
{
private:
	std::string	type;
public:
    ZombieEvent();
    ~ZombieEvent();
    void setZombieType(std::string type);
	Zombie *newZombie(std::string name);
	Zombie *randomChump(void);
};

#endif