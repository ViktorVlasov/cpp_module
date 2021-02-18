/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 16:37:31 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/18 22:13:33 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
class Form;
# include "Bureaucrat.hpp"

class Form
{
private:
    const std::string name;
    const int gradeSign;
    const int gradeExecute;
    bool wasSigned;
    
    Form();
public:
    Form(const std::string &name, int gradeSign, int gradeExecute);
	Form(const Form &form);
	virtual ~Form();
	Form &operator=(const Form &form);

	std::string const &getName(void) const;
	int const &getGradeSign(void) const;
	int const &getGradeExecute(void) const;
	bool const &getWasSigned(void) const;
    
    class GradeTooHighException: public std::exception {
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		const char* what() const throw();
	};
	class FormIsSignedException: public std::exception {
		const char* what() const throw();
	};

    void beSigned(const Bureaucrat &bureaucrat);
    void execute(const Bureaucrat &executor) const;
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif 