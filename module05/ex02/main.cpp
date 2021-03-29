/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:27:14 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/26 20:15:42 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
   Bureaucrat *senior_bure = new Bureaucrat("Bob", 1);
   Bureaucrat *junior_bure = new Bureaucrat("Charlie", 145);

   ShrubberyCreationForm shrub("Hydrangea");
   PresidentialPardonForm pres("Navalny");
   RobotomyRequestForm robot("Harry");

   std::cout << *senior_bure << std::endl;
   std::cout << *junior_bure << std::endl;
   std::cout << shrub << std::endl;
   std::cout << pres << std::endl;
   std::cout << robot << std::endl;
   std::cout << "=================================" << std::endl;

   junior_bure->signForm(pres);
   senior_bure->signForm(pres);
   junior_bure->executeForm(pres);
   senior_bure->executeForm(pres);
   std::cout << "=================================" << std::endl;


   junior_bure->signForm(robot);
   senior_bure->signForm(robot);
   junior_bure->executeForm(robot);
   senior_bure->executeForm(robot);
   std::cout << "=================================" << std::endl;

   junior_bure->signForm(shrub);
   senior_bure->signForm(shrub);
   junior_bure->executeForm(shrub);
   senior_bure->executeForm(shrub);
Bonjour
   delete junior_bure;
   delete senior_bure;
   return 0;
}
 