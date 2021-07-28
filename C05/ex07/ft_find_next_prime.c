/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:46:52 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/28 18:53:26 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb);

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb <= 1)
		return (0);
	while (a < nb)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	a;

	a = 2;
	if (nb < 2)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	printf("8 --> %d\n", ft_find_next_prime(8));
	printf("20 --> %d\n", ft_find_next_prime(20));
	printf("42 --> %d\n", ft_find_next_prime(42));
	printf("90 --> %d\n", ft_find_next_prime(90));
	return 0;
}*/
