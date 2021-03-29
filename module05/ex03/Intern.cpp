/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 23:07:34 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/26 12:08:35 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern() {}
Intern::Intern(const Intern& intern) { (void)intern; }
Intern::~Intern() {}
Intern & Intern::operator=(const Intern& intern) 
{ 
    (void)intern;
    return (*this);
}

Form*   Intern::makeForm(std::string const & form_name, std::string const & target)
{
	t_forms	forms[] = 
	{
		{"presidential pardon", &PresedentForm},
		{"robotomy request", &RequestForm},
		{"shrubbery creation", &CreationForm}
	};
    Form* result = NULL;

	for (int i = 0; i < 3; i++)
	{
        if (forms[i].form_name == form_name)
		{
			result = forms[i].f(target);
			std::cout << "Intern creates " << result->getName() << std::endl;
			return (result);
		}
	}
    throw IncorrectForm();
	return (result);
}

const char *Intern::IncorrectForm::what() const throw() {
	return ("Incorrect form.");
}

Form* Intern::PresedentForm(std::string const & target) 
{ 
    return (new PresidentialPardonForm(target));
}

Form* Intern::RequestForm(std::string const & target) 
{ 
    return (new RobotomyRequestForm(target));
}

Form* Intern::CreationForm(std::string const & target) 
{ 
    return (new ShrubberyCreationForm(target));
}
