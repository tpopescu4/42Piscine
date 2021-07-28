/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:37:46 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/13 12:55:03 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 1)
	{
		nb *= a;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_power(2,6));
	printf("%d\n", ft_iterative_power(5,6));
	printf("%d\n", ft_iterative_power(0,6));
	return 0;
}*/
