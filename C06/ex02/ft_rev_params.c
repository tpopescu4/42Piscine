/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:52:25 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/13 13:24:08 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_string(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
}

int	main(int argc, char **argv)
{
	int	a;

	a = argc - 1;
	if (argc > 1)
	{
		while (a > 0)
		{
			ft_print_string(argv[a]);
			ft_print_string("\n");
			a--;
		}
	}
	return (0);
}
