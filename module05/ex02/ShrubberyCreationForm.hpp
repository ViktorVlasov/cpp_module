/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 22:00:53 by efumiko           #+#    #+#             */
/*   Updated: 2021/02/18 23:04:03 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	ShrubberyCreationForm();

	std::string const target;
	static std::string const trees[3];
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

	class OpenFileException: public std::exception {
		virtual const char* what() const throw();
	};

	void execute(Bureaucrat const &executor) const;
};

#endif