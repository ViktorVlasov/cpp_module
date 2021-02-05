/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 12:27:19 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/04 20:46:46 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
 # define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer
{
private:
    std::string name;
    std::string title;
    Sorcerer();
public:
    Sorcerer(std::string name, std::string title);
    Sorcerer(const Sorcerer &sorcerer);
    virtual ~Sorcerer();
    Sorcerer &operator=(const Sorcerer &sorcerer);
    
    const std::string &getName(void) const;
    const std::string &getTitle(void) const;
    void polymorph(const Victim &victim) const;
};

std::ostream& operator<< (std::ostream &out, const Sorcerer &sorcerer);

 #endif