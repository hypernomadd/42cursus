#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int			cpyAndReplace(std::string filename, std::string str1,
		std::string str2)
{
	size_t				pos;
	std::ifstream		input(filename);
	std::ofstream		output;
	std::string			buffer;
	std::ostringstream 	ss;

	if (!input)
	{
		std::cerr << "Error: Can't open filename" << std::endl;
		return (1);	
	}
	output.open(filename + ".replace");
	if (!output)
	{
		std::cerr << "Error: Can't open filename.replace" << std::endl;
		return (1);
	}
	ss << input.rdbuf();
	buffer = ss.str();
	pos = buffer.find(str1);	
	while (pos != std::string::npos)
	{
		buffer.replace(pos, str1.length(), str2);
		pos = buffer.find(str1, pos + str2.length());
	}
	output << buffer;
	output.close();	
	input.close();
	return (0);
}

int			main(int argc, char *argv[])
{
	std::string	str1;
	std::string	str2;
	std::string filename;

	if (argc != 4)
	{
		std::cerr << "usage: " << argv[0] << " filename str1 str2" << std::endl;
		return (1);
	}
	str1 = std::string(argv[2]);
	str2 = std::string(argv[3]);
	if (!str1.length() || !str2.length())
	{
		std::cerr << "Error: Empty string" << std::endl;
		return (1);
	}
	filename = std::string(argv[1]);
	return (cpyAndReplace(filename, str1, str2));
}
