/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:27:14 by efumiko           #+#    #+#             */
/*   Updated: 2021/03/26 11:14:03 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

 int main()
 {
   Bureaucrat *senior_bure = new Bureaucrat("Bob", 20);
   Bureaucrat *junior_bure = new Bureaucrat("Charlie", 145);
   Form *form_b1 = new Form("B1", 100, 100);

   std::cout << *senior_bure << std::endl;
   std::cout << *junior_bure << std::endl;
   std::cout << *form_b1 << std::endl;

   junior_bure->signForm(*form_b1);
   std::cout << *form_b1 << std::endl;
   
   senior_bure->signForm(*form_b1);
   std::cout << *form_b1 << std::endl;

   senior_bure->signForm(*form_b1);

   delete form_b1;
   delete junior_bure;
   delete senior_bure;
   return 0;
 }
 