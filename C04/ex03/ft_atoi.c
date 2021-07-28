/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 17:30:31 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/07 14:21:21 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	a;
	int	m;
	int	n;

	a = 0;
	m = 0;
	n = 0;
	while ((str[a] > 8 && str[a] < 14) || str[a] == 32)
	{
		a++;
	}
	while (str[a] == 45 || str[a] == 43)
	{
		m++;
		a++;
	}
	while (str[a] > 47 && str[a] < 58)
	{
		n = n * 10;
		n += (str[a] - 48);
		a++;
	}
	if (m % 2 != 0)
		n = n * -1;
	return (n);
}
/*
int main ()
{
	char s[] = "  	---+-+525123<ab67";
	printf("%d\n", ft_atoi(s));
	return 0;
}*/
