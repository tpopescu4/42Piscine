/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:54:29 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/28 18:45:28 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//KO
#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);
void	ft_putstr(char *c);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr_base2(int nbr, char *base);
int		ft_sort_str(char str[]);

int	ft_strlen(char *str)	
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

void	ft_putstr(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		write (1, &c[i], 1);
		i++;
	}
}

void	ft_putnbr_base2(int nbr, char *base)
{
	int	a;
	int	b;

	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr *= -1;
	}
	if (!nbr)
		return ;
	else
	{
		a = nbr / ft_strlen(base);
		b = nbr % ft_strlen(base);
		ft_putnbr_base2(a, base);
	}
	if (a < ft_strlen(base))
		write (1, &base[b], 1);
	else
	{
		write (1, &base[b], 1);
		write (1, &base[a], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (base[i] != '\0')
	{
		if (base[i] == 43 || base[i] == 45)
			c = 1;
		i++;
	}
	if (ft_strlen(base) <= 1)
	{
		ft_putstr("error");
		c = 1;
	}
	if (ft_sort_str(base) == 0)
	{
		ft_putstr("error");
		c = 1;
	}
	
	if (c == 0)
		ft_putnbr_base2(nbr, base);
}

int	ft_sort_str(char str[])
{
	char	swap;
	int		i;
	int		j;

	i = 4;
	while (i-- >= -1)
	{
		j = 0;
		while (str[j + 1] != '\0')
		{
			if (str[j] > str[j + 1])
			{	
			swap = str[j];
			str[j] = str[j + 1];
			str[j + 1] = swap;
			}
			j++;
		}
	}
	while (str[i++] != '\0')
	{
		if (str[i] == str[i + 1])
			return (0);
	}
	return (1);
}

int main()
{
	ft_putnbr_base(-531,"01234567");
	return 0;
}
