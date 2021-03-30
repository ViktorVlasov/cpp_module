/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:04:46 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/30 19:54:49 by efumiko          ###   ########.fr       */
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
	unsigned int N;
	std::vector<int> arr;
	Span();
public:
	Span(unsigned int N);
	Span(const Span& other);
	virtual ~Span();
	Span& operator=(const Span& other);
	
	void addNumber(int elem);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	
    class ArrFullException : public std::exception {
		virtual const char *what() const throw();
	};
	class TooFewException : public std::exception {
		virtual const char *what() const throw();
	};
	class SpanNotFound : public std::exception {
		virtual const char *what() const throw();
	};
	
	int	shortestSpan();
	int	longestSpan();
};

#endif