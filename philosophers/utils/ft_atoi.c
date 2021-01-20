#include "utils.h"

static int	ft_is_string(const char c, const char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

int			ft_atoi(const char *nptr)
{
	unsigned int	ans;
	int				neg;

	ans = 0;
	neg = 1;
	while (ft_is_string(*nptr, "\t\n\r\v\f "))
		nptr++;
	if (nptr[0] == '-')
	{
		neg *= -1;
		nptr++;
	}
	else if (nptr[0] == '+')
		nptr++;
	while (ft_is_string(*nptr, "0123456789"))
	{
		ans = ans * 10 + (*nptr - '0');
		nptr++;
	}
	return ((int)(neg * ans));
}
