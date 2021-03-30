/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 22:09:53 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/30 21:47:29 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N) : N(N) 
{}

Span::~Span()
{
	this->arr.clear();
}

Span::Span(const Span& other) 
{
	*this = other;
}

Span& Span::operator=(const Span& other) 
{
	if (this != &other)
	{
		this->N = other.N;
		this->arr = other.arr;
	}
	return *this;
}

void Span::addNumber(int elem) 
{
	if (this->arr.size() >= this->N )
		throw Span::ArrFullException();
	this->arr.push_back(elem);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (std::distance(begin, end) + this->arr.size() > this->N)
		throw Span::ArrFullException();
	this->arr.insert(this->arr.end(), begin, end);
}

int Span::shortestSpan()
{
	if (this->arr.size() < 2)
		throw Span::TooFewException();
	
	int tmp_shortest;
	std::vector <int> tmp(arr.size());

	std::copy(arr.begin(), arr.end(), tmp.begin());
	std::sort(tmp.begin(), tmp.end());
	int shortest = tmp[1] - tmp[0];

	std::vector<int>::iterator it = tmp.begin();
	std::vector<int>::iterator it_end = tmp.end();
	for (; it != it_end - 1; it++)
	{
		tmp_shortest = *(it + 1) - *it;
		if (tmp_shortest < shortest)
			shortest = tmp_shortest;
	}
	return shortest;
}

int Span::longestSpan()
{
	if (this->arr.size() < 2)
		throw Span::TooFewException();
	int min_elem = *std::min_element(arr.begin(), arr.end());
	int max_elem = *std::max_element(arr.begin(), arr.end());
	return (max_elem - min_elem);
}

const char* Span::ArrFullException::what() const throw()
{
	return "ArrFullException::Array is full!";
}

const char* Span::TooFewException::what() const throw()
{
	return "TooFewException::It is not possible to find the span. Too few elements!";
}