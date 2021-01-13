#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int		main(void)
{
	int i;
	char *line;
	
	printf("input any words\n");
	line = 0;
	i = get_next_line(&line);
	printf("You entered : %s\n return : %d\n", line, i);
	return (0);
}