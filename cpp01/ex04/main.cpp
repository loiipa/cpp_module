/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:38:47 by cjang             #+#    #+#             */
/*   Updated: 2022/02/04 13:04:23 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static int	errorMessage(std::string message)
{
	std::cout << message << std::endl;
	return (1);
}

static int	replaceS1toS2(std::ifstream& file, std::string& filename, std::string& s1, std::string& s2)
{
	std::ofstream 	fileReplace(filename + (std::string)".replace");
	std::string		strBefore;
	std::string		strAfter;
	int				iBefore;
	int				iAfter;

	std::getline(file, strBefore);
	while (!file.eof())
	{
		iBefore = 0;
		iAfter = 0;
		strAfter.clear();
		while (iAfter != -1)
		{
			iAfter = strBefore.find(s1, iBefore);
			if (iAfter == -1)
				strAfter += strBefore.substr(iBefore, iAfter);
			else
			{
				strAfter += strBefore.substr(iBefore, iAfter - iBefore);
				strAfter += s2;
				iBefore = iAfter + s1.length();
			}
		}
		fileReplace << strAfter << std::endl;
		std::getline(file, strBefore);
	}
	file.close();
	fileReplace.close();
	return (0);
}

int	main(int argc, char **argv)
{
	std::string		filename;
	std::string		s1;
	std::string		s2;
	std::ifstream	file;

	if (argc != 4)
		return errorMessage("argument : [filename] [string1] [string2]");

	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	if (filename.length() == 0 || s1.length() == 0 || s2.length() == 0)
		return errorMessage("Empty string - NOT allow.");

	file.open(filename);

	if (file.fail())
		return errorMessage("NOT exist file.");

	return replaceS1toS2(file, filename, s1, s2);
}
