/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:01:20 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/14 22:38:02 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_print_str(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write (1, &str[a], 1);
		a++;
	}
	write (1, "\n", 1);
}

void	ft_sort(int argc, char **argv)
{
	int		a;
	int		b;
	char	*c;

	a = 1;
	while (a < argc)
	{
		b = a + 1;
		while (b < argc)
		{
			if (ft_strcmp(argv[a], argv[b]) > 0)
			{
				c = argv[a];
				argv[a] = argv[b];
				argv[b] = c;
			}
			b++;
		}
		a++;
	}
}

int	main(int argc, char **argv)
{
	int		a;

	a = 1;
	if (argc > 1)
	{
		while (a < argc)
		{
			ft_sort(argc, argv);
			ft_print_str(argv[a]);
			a++;
		}
	}
	return (0);
}
