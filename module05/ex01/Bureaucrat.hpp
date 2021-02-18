/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:27:11 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/18 21:54:59 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
private:
	const std::string name;
	int grade;

	Bureaucrat();
public:
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	virtual ~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &bureaucrat);

	std::string const &getName(void) const;
	int getGrade(void) const;
	void incrementGrade(void);
	void decrementGrade(void);
	void signForm(Form &form);

    class GradeTooHighException: public std::exception {
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);



#endif
