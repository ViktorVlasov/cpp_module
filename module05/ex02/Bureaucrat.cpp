/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:27:09 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/18 22:30:28 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) :
	name(name), grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat):
	name(bureaucrat.name), grade(bureaucrat.grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	this->grade = bureaucrat.grade;
	return (*this);
}

const std::string &Bureaucrat::getName(void) const { return (this->name); }
int Bureaucrat::getGrade(void) const { return (this->grade); }

void Bureaucrat::incrementGrade(void)
{
	if ((this->grade - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
    this->grade -= 1;
}

void Bureaucrat::decrementGrade(void)
{
	if ((this->grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += 1;
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getWasSigned() == true)
		std::cout << this->name << " cannot sign " << form.getName() << " because form was signed." << std::endl;
	else
		try
		{
			form.beSigned(*this);
			std::cout << this->name << " signs " << form.getName() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << this->name << " cannot sign " << form.getName() << " because ";
			std::cout << e.what() << std::endl;
		}
}

void Bureaucrat::executeForm(const Form &form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->name << " cannot sign " << form.getName() << " because ";
		std::cout << e.what() << std::endl;
	}
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << "Bureaucrat " << bureaucrat.getName() << " (Grade " << bureaucrat.getGrade() << ")";
	return (out);
}