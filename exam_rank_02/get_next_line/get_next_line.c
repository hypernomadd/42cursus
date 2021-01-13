#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *s)
{
	int i;
	
	i = 0;
	while (*s++)
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int i;
	int len1;
	int len2;
	char *res;
	
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = malloc(sizeof(char) * (len1 + len2 + 1));
	i = 0;
	while (i < len1 + len2)
	{
		if (i < len1)
			res[i] = s1[i];
		if (i >= len1)
			res[i] = s2[i - len1];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int		get_next_line(char **line)
{
	int size;
	char buf[2];
	char *store;
	char *temp;
	
	size = 1;
	buf[size] = '\0';
	store = ft_strjoin("", "");
	while (size && buf[size] != '\n')
	{
		size = read(0, buf, 1);
		buf[size] = '\0';
		if (buf[0] != '\n')
		{
			temp = ft_strjoin(store, buf);
			free(store);
			store = temp;
		}
	}
	*line = store;
	return (size);
}