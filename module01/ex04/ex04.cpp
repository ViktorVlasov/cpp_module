/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:53:53 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/12 12:14:36 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char const *argv[])
{
    std::string speech = "HI THIS IS BRAIN";

    /* Reference to string */
    std::string &ref_speech = speech;
    std::cout << "ref_speech adress: " << &ref_speech << std::endl; 
    std::cout << "speech adress: " << &speech << std::endl;
    std::cout << std::endl;

    std::cout << "ref_speech contents: " << ref_speech << std::endl; 
    std::cout << "speech contents: " << speech << std::endl;

    ref_speech = "HELLO, THIS IS BRAIN";
    std::cout << "change ref_speech contents." << std::endl;
    std::cout << "ref_speech contents: " << ref_speech << std::endl; 
    std::cout << "speech contents: " << speech << std::endl;
    
    std::cout << "===========================================" << std::endl;
    
    /* Pointer to string */
    std::string *pointer_speech = &speech;
    std::cout << "pointer_speech contents: " << *pointer_speech << std::endl;
    std::cout << "speech contents: " << speech << std::endl;
    
    *pointer_speech = "BRAAAAAAIN!!!!";
    std::cout << "change pointer_speech contents." << std::endl;
    std::cout << "pointer_speech contents: " << *pointer_speech << std::endl;
    std::cout << "speech contents: " << speech << std::endl;

    return 0;
}
