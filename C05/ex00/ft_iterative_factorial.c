/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:10:54 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/09 14:18:01 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = nb - 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (a != 0)
	{
		nb *= a;
		a--;
	}
	return (nb);
}
