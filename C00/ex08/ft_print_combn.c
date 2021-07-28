/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:16:18 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/28 18:37:51 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Timeout
#include <unistd.h>

void	ft_print_arr(int n[], int t);
void	ft_fill_arr(int n[]);
void	ft_print_combn(int n);
void	ft_sort_arr(int n[], int t);
int		ft_exit_arr(int n[], int t);

void	ft_print_arr(int n[], int t)
{
	int		swap;
	char	c;

	while (--t > -1)
	{
		swap = n[t] + 48;
		c = swap;
		write(1, &c, 1);
	}
}

void	ft_fill_arr(int n[])
{
	int	cont;

	cont = -1;
	while (++cont < 9)
	{
		n[cont] = 0;
	}
}

void	ft_comp_arr(int n[], int t)
{
	int	i;

	i = -1;
	while (++i < t - 1)
	{
		if (n[i] == 10)
		{
			n[i] = 0;
			if (n[i + 1] != 10)
				n[i + 1]++;
			else
				n[i + 1] = 0;
		}
	}
}

int	ft_exit_arr(int n[], int t)
{	
	int	cont;
	int	max;

	max = 9;
	cont = -1;
	while (++cont < t - 1)
	{
		if (n[cont] == max)
			max--;
	}
	if (max == (9 - (t - 1)) && n[t - 1] == max)
		return (1);
	else
		return (2);
}

void	ft_print_combn(int n)
{
	int	a[9];

	if (0 < n && n < 10)
	{
		ft_fill_arr(a);
		while (ft_exit_arr(a, n) != 1)
		{
			ft_comp_arr(a, n);
			ft_print_arr(a, n);
			write(1, " ", 1);
			a[0]++;
		}
		ft_print_arr(a, n);
		write(1, "\n", 2);
	}
}
