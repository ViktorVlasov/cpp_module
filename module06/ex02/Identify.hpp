/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:03:27 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/29 21:34:45 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

# include <iostream>
# include <cstdlib>

class Base
{
public:
    virtual ~Base(){};
};

class A : public Base 
{
public:
    virtual ~A(){};
};

class B : public Base 
{
public:
    virtual ~B(){};
};

class C : public Base 
{
public:
    virtual ~C(){};
};

Base *generate(void);
void identify_from_pointer(Base *p);
void identify_from_reference(Base &p);

#endif