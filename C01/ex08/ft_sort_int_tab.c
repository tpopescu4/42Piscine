/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 16:03:22 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/03 17:23:19 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	cont;
	int	b;
	int	c;

	cont = 0;
	a = 0;
	while (a < size)
	{
		c = a;
		cont = a + 1;
		while (cont < size)
		{
			if (tab[cont] < tab[c])
			{
				c = cont;
			}
			cont++;
		}
		b = tab[a];
		tab[a] = tab[c];
		tab[c] = b;
		a++;
	}
}
