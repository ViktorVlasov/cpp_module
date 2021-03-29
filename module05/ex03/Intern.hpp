/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 23:07:37 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/26 12:02:54 by efumiko          ###   ########.fr       */
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
    typedef struct s_forms 
    { 
        std::string form_name; 
        Form* (*f)(std::string const & target); 
    }               t_forms;
public:
    Intern();
    Intern(const Intern&);
    virtual ~Intern();
    Intern &operator=(const Intern& op);
    Form *makeForm(std::string const &form_name, std::string const &target);
    
    class IncorrectForm: public std::exception {
		virtual const char* what() const throw();
	};
    static Form *PresedentForm(std::string const & target);
    static Form *RequestForm(std::string const & target);
    static Form *CreationForm(std::string const & target);
};

#endif