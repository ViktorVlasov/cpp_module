/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 16:37:34 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/18 22:15:12 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, const int gradeSign, const int gradeExecute) :
    name(name), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
    if (this->gradeSign < 1 || this->gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (this->gradeSign > 150 || this->gradeExecute > 150)
		throw Form::GradeTooLowException();
    
    this->wasSigned = false;
}

Form::Form(const Form &form) :
    name(form.name), gradeSign(form.gradeSign), gradeExecute(form.gradeExecute)
{
    if (this->gradeSign < 1 || this->gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (this->gradeSign > 150 || this->gradeExecute > 150)
		throw Form::GradeTooLowException();
    
    this->wasSigned = false;
}

Form::~Form() {}

Form &Form::operator=(const Form &form) 
{
	this->wasSigned = form.wasSigned;
	return (*this);
}

std::string const &Form::getName(void) const { return this->name; }
int const &Form::getGradeSign(void) const { return this->gradeSign; }
int const &Form::getGradeExecute(void) const { return this->gradeExecute; }
bool const &Form::getWasSigned(void) const { return this->wasSigned; }

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form::GradeTooHighException");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form::GradeTooLowException");
}

const char* Form::FormIsSignedException::what() const throw()
{
	return ("Form::FormIsSignedException");
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeSign)
		throw Form::GradeTooLowException();
	this->wasSigned = true;
}

void Form::execute(const Bureaucrat &executor) const
{
	if (this->wasSigned == false)
		throw Form::FormIsSignedException();
	else if (executor.getGrade() > this->gradeExecute)
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << form.getName() << ", grade required to sign: "
	    << form.getGradeSign() << ", grade required to execute: "
	    << form.getGradeExecute() << ", form status: " 
        << (form.getWasSigned() ? "signed" : "not signed");
	return (out);
}