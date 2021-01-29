/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 12:27:23 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/29 23:38:11 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
private:
    Victim();
protected:
    std::string name;
public:
    Victim(std::string name);
    Victim(const Victim &victim);
    virtual ~Victim();
    Victim &operator=(const Victim &victim);

    virtual void getPolymorphed() const;
    const std::string &getName(void) const;
};

std::ostream& operator<< (std::ostream &out, const Victim &victim);

#endif 