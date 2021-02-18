/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 23:07:37 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/18 23:34:46 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    private: 
        Form *getPresidentialPardonForm(std::string const & target);
        Form *getRobotomyRequestForm(std::string const & target);
        Form *getShrubberyCreationForm(std::string const & target);

    	typedef Form* (*function)(std::string const & target);
     	typedef struct 
        { 
            std::string form_name; 
            function func; 
        } FormTypes;
    public:
        Intern();
        Intern(const Intern&);
        virtual ~Intern();
        Intern &operator=(const Intern& op);

        Form* makeForm(std::string const &form_name, std::string const &target);
};

Intern::Intern() {}
Intern::Intern(const Intern& intern) { (void)intern; }
Intern::~Intern() {}
Intern & Intern::operator=(const Intern& intern) 
{ 
    (void)intern;
    return (*this); 
}

Form*		Intern::makeForm(std::string const & form_name, std::string const & target)
{
	Form *result = NULL;
	
    FormTypes forms[] = 
	{
		{"presidential pardon", &getPresidentialPardonForm},
		{"robotomy request", &getRobotomyRequestForm},
		{"shrubbery creation", &getShrubberyCreationForm}
	};

	for (int i = 0; i < 3; i++)
		if (forms[i].form_name == form_name)
		{
			rtn = forms[i].func(target);
			std::cout << "Intern creates " << rtn->getName() << std::endl;
			return (rtn);
		}
	std::cout << "Intern is not able to create the form asked." << std::endl;
	return (rtn);
}

Form* Intern::getPresidentialPardonForm(std::string const & target) 
{ 
    return (new PresidentialPardonForm(target));
}

Form* Intern::getRobotomyRequestForm(std::string const & target) 
{ 
    return (new RobotomyRequestForm(target));
}

Form* Intern::getShrubberyCreationForm(std::string const & target) 
{ 
    return (new ShrubberyCreationForm(target));
}

#endif