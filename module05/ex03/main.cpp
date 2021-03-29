/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:27:14 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/26 12:12:00 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

 int main()
 {
   {
      std::cout << "======Test 1========" << std::endl;
      Bureaucrat *senior_bure = new Bureaucrat("Bob", 1);
      Bureaucrat *junior_bure = new Bureaucrat("Charlie", 145);

      Intern someRandomIntern;
      Form* rrf;
      try 
      {
         rrf = someRandomIntern.makeForm("rObotomy request", "Bender");
         std::cout << "==========================\n";
         std::cout << *senior_bure << std::endl;
         std::cout << *junior_bure << std::endl;
         std::cout << *rrf << std::endl;
         std::cout << "==========================\n";

         junior_bure->signForm(*rrf);
         std::cout << *rrf << std::endl;
         std::cout << "==========================\n";

         senior_bure->signForm(*rrf);
         std::cout << *rrf << std::endl;

         delete rrf;
      }
      catch (std::exception const &e) {
         std::cerr << e.what() << std::endl;
      }

      delete junior_bure;
      delete senior_bure;
   }

   {
      std::cout << "======Test 2========" << std::endl;

      Bureaucrat *senior_bure = new Bureaucrat("Bob", 1);
      Bureaucrat *junior_bure = new Bureaucrat("Charlie", 145);

      Intern someRandomIntern;
      Form* rrf;
      try 
      {
         rrf = someRandomIntern.makeForm("robotomy request", "Bender");
         std::cout << "==========================\n";
         std::cout << *senior_bure << std::endl;
         std::cout << *junior_bure << std::endl;
         std::cout << *rrf << std::endl;
         std::cout << "==========================\n";

         junior_bure->signForm(*rrf);
         std::cout << *rrf << std::endl;
         std::cout << "==========================\n";

         senior_bure->signForm(*rrf);
         std::cout << *rrf << std::endl;

         delete rrf;
      }
      catch (std::exception const &e) {
         std::cerr << e.what() << std::endl;
      }

      delete junior_bure;
      delete senior_bure;
   }
 }
 