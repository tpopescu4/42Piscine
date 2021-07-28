/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulimate_range.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 22:12:52 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/14 22:15:24 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_utlimate_range(int **range, int min, int max)
{
	int	i;
	int	*a;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
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
	*range = a;
	return (i);
}
