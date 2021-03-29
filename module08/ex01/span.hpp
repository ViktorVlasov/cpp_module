/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:04:46 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/27 21:13:08 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <ctime>

class Span
{
private:
	std::vector<int> arr;
	unsigned int N;
	Span();
public:
	Span(unsigned int N);
	Span(const Span& other);
	virtual ~Span();
	Span& operator=(const Span& other);
	
	void addNumber(int elem);
    template <typename T>
	void	addNumber(T begin, T end) 
    {
		if (std::distance(begin, end) + this->arr.size() > this->N)
			throw Span::MaxSizeError();
		this->arr.insert(this->arr.end(), begin, end);
	}
	
    class MaxSizeError : public std::exception {
		virtual const char *what() const throw();
	};
	class NotEnoughElements : public std::exception {
		virtual const char *what() const throw();
	};
	class SpanNotFound : public std::exception {
		virtual const char *what() const throw();
	};
	int	shortestSpan() const;
	int	longestSpan() const;
};


#endif