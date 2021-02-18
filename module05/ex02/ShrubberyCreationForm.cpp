/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 22:30:41 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/18 23:04:29 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
	Form("ShrubberyCreationForm", 145, 137), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other):
	Form(other), target(other.target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	(void)other;
	return (*this);
}

const char* ShrubberyCreationForm::OpenFileException::what() const throw()
{
	return "ShrubberyCreationForm::OpenFileException";
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::ofstream outf(this->target + "_shrubbery", std::ios::out | std::ios::app);

	if (!outf.is_open() || !outf.bad())
		throw OpenFileException();
    outf << "       ###    " << std::endl;
    outf << "      #o###   " << std::endl;
    outf << "    #####o### " << std::endl;
    outf << "   #o#\\#|#/###" << std::endl;
    outf << "    ###\\|/#o# " << std::endl;
    outf << "     # }|{  # " << std::endl;
    outf << "       }|{    " << std::endl; 
    outf.close();
}