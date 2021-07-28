#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	char	s;
	int		i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			s = (s1[i] - s2[i]);
			return (s);
		}
		i++;
	}
	return (0);
}
