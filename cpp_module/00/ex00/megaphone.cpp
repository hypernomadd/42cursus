/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:29:07 by chshin            #+#    #+#             */
/*   Updated: 2021/03/27 16:32:49 by chshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <iostream>

#define DEFAULT_MESSAGE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int main(int argc, char **argv)
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
				std::cout << (char)toupper(current);
		}
		std::cout << std::endl;
	}
}
