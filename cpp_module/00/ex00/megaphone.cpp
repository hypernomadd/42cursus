#include <ctype.h>
#include <iostream>

#define DEFAULT_MESSAGE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int
main(int argc, char **argv)
{
	if (argc <= 1)
		std::cout << DEFAULT_MESSAGE << std::endl;
	else
	{
		for (int index = 1; index < argc; index++)
		{
			char *str = argv[index];
			char current;

			for (int jndex = 0; (current = str[jndex]); jndex++)
				std::cout << (char) toupper(current);
		}

		std::cout << std::endl;
	}
}