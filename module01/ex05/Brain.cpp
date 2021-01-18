/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 12:26:26 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/18 17:49:44 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    iq = 100;
}

Brain::Brain(int iq)
{
    this->iq = iq;
}

Brain::~Brain()
{
}

int Brain::getIq(void) const
{
    return (iq);
}

std::string Brain::identify() const
{
    std::stringstream stream;

    stream << "0x" << std::hex << std::uppercase << (long)this;
    return (stream.str());
}