/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 22:50:44 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/12 23:30:59 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include <fstream>
# include <sstream>
# include <cstring>

const std::string &str_replace(std::string line, const std::string &search, const std::string &replace)
{
	std::stringstream ss;
	size_t j;
	size_t slength(search.length());

	for (size_t i = 0; i < line.length(); i++)
	{
		j = 0;
		while (line[i + j] == search[j] && j < slength)
			j++;
		if (j == slength)
		{
			ss << replace;
			i += (j - 1);
		}
		else
			ss << line[i];
	}
	return (ss.str());
}

int main(int argc, char const *argv[])
{
    std::ifstream file;
	std::ofstream output;
	std::string line;
    
    if (argc == 4)
    {
        try
        {
            if (strlen(argv[1]) == 0)
                throw "Invalid filename.";
            else if (strlen(argv[2]) == 0)
                throw "Invalid search string.";
            else if (strlen(argv[3]) == 0)
                throw "Invalid replace string.";
            file.open(argv[1]);
	        if (!file.is_open())
		        throw "Invalid input file.";
            file.open(std::string(argv[1]) + ".replace", std::ios::trunc);
            if (!output.is_open())
		        throw "Invalid output file.";
            while (std::getline(file, line))
            {
                output << str_replace(line, argv[2], argv[3]);
                if (!file.eof())
                    output << '\n';
            }
        }
        catch(const char* exception)
        {
            std::cerr << "Error: " << exception << '\n';
        }      
    }
    else
        std::cerr << "Invalid number of arguments." << std::endl;
    return 0;
}
