/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:36:25 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/12 11:10:27 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
    std::string name;
    std::string type;
public:
    Zombie();
    Zombie(std::string name, std::string type);
    ~Zombie();
    void setFeatures(std::string name, std::string type);
    void announce(void);
};


#endif