#include <unistd.h>

int		ft_strlen(char *s)
{
	int i;
	
	i = 0;
	while (*s++)
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	check(char c, char *s, int max_i)
{
	int i;
	
	i = 0;
	while (i < max_i && s[i])
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_inter(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s1[i])
	{
		if (!check(s1[i], s1, i) && check(s1[i], s2, ft_strlen(s2)))
			ft_putchar(s1[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	ft_putchar('\n');
	return 0;
}