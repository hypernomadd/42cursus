#include "ft_printf.h"
#include <stdio.h>

int main()
{
	printf("%10.8d", -42);
	ft_printf("%10.8d", -42);
}