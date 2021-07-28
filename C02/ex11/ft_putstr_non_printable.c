/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:04:45 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/28 18:42:57 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//KO
#include <unistd.h>

void	ft_putchar(char c);
void	hexa(int n);
void	ft_putstr_non_printable(char *str);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	hexa(int n)
{
	int		a;
	int		b;

	a = n / 16;
	b = n % 16;
	if (b > 9)
	{
		a += 48;
		b += 87;
		ft_putchar(a);
		ft_putchar(b);
	}
	else
	{
		b += 48;
		a += 48;
		ft_putchar(a);
		ft_putchar(b);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	a;
	int	b;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 0 && str[a] < 32) || str[a] == 127)
		{
			b = str[a];
			ft_putchar('\\');
			hexa(b);
		}
		else
			ft_putchar(str[a]);
		a++;
	}
}
/*
int main()
{
	char s[7];
	s[5] = 27;
	s[6] = 28;
	ft_putstr_non_printable(s);
	return 0;
}*/
