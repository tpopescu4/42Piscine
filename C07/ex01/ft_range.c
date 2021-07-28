/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 20:12:08 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/14 21:57:08 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*a;

	if (min >= max)
		return (NULL);
	a = (int *)malloc(sizeof(int) * (max - min));
	if (!a)
		return (NULL);
	i = 0;
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
/*
#include <stdio.h>
int main()
{
	int	i;
	int	*a;

	a = ft_range(2,20);
	i = 0;
	while (i < 20 - 2)
	{
		printf("%d\n", a[i]);
		i++;
	}
	return 0;
}*/
