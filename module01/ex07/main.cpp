/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 22:50:44 by efumiko           #+#    #+#             */
/*   Updated: 2021/01/18 19:04:18 by efumiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include <fstream>
# include <sstream>
# include <cstring>
#include <algorithm>

std::string replace_words(std::string line, const std::string &search_str, const std::string &replace_str)
{
	int search_len = search_str.length();
	int hit_index;
    std::stringstream result;

	for (int index_line = 0; index_line < line.length(); index_line++)
	{
		hit_index = 0;
		while (line[index_line + hit_index] == search_str[hit_index] && hit_index < search_len)
			hit_index++;
            
		if (hit_index == search_len)
		{
			result << replace_str;
			index_line += (hit_index - 1);
		}
		else
			result << line[index_line];
	}
	return (result.str());
    
    // with c++ 11
    // std::string result(line);
    // size_t pos = result.find(search_str);
    // while (pos != std::string::npos) {
    //     result.replace(pos, search_str.size(), replace_str);
    //     pos = result.find(search_str, pos);
    // }
    // return result;
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
            output.open(std::string(argv[1]) + ".replace", std::ios::trunc);
            if (!output.is_open())
		        throw "Invalid output file.";
            while (std::getline(file, line))
            {
                output << replace_words(line, argv[2], argv[3]);
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
