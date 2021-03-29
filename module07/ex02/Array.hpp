/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 20:19:49 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/26 20:54:55 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <string>

template <typename T>
class Array
{
private:
	unsigned int len;
	T *array;
public:
	Array() : len(0), array(NULL) 
    {}
	
	Array(unsigned int n) : len(n), array(NULL) 
    {
		this->array = new T[n]();
	}
    
    virtual ~Array()
	{
		if (this->len > 0)
			delete[] this->array;
	}
    
	Array(const Array &copy) : len(0), array(NULL) 
    {
		if (copy.len > 0)
		{
			this->arr = new T[copy.len]();
			for (unsigned int i = 0; i < copy.len; i++)
				this->array[i] = copy.array[i];
		}
		this->len = copy.len;
	}
    
	Array &operator=(const Array &other) 
    {
		if (this->len > 0)
			delete[] this->array;
		this->array = NULL;
		if (other.len > 0)
		{
			this->array = new T[other.len]();
			for (unsigned int i = 0; i < other.len; i++)
				this->array[i] = other.array[i];
		}
		this->len = other.len;
		return (*this);
	}
    
    class OutOfLimits: public std::exception 
    {
		virtual const char* what() const throw() {
			return("Element is out of the limits");
		}
	};
    
	T &operator[](unsigned int index) {
		if (index >= this->len)
			throw Array::OutOfLimits();
		return (this->array[index]);
	}
    
	T const &operator[](unsigned int index) const { 
        if (index >= this->len)
			throw Array::OutOfLimits();
		return (this->array[index]);
    }
    
	unsigned int size(void) const { return (this->len); }
};

#endif