/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:16:11 by tpopescu          #+#    #+#             */
/*   Updated: 2021/06/30 17:41:19 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_print_comb(void);
void	ft_print(int n1, int n2, int n3);

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 48;
	while (num1 < 56)
	{
		num2 = num1 + 1;
		while (num2 < 57)
		{
			num3 = num2 + 1;
			while (num3 < 58)
			{
				if (num1 < num2 && num2 < num3)
				{
					ft_print(num1, num2, num3);
					num3++;
				}
				else
					num3++;
			}
			num2++;
		}
		num1++;
	}
}

void	ft_print(int n1, int n2, int n3)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = n1;
	c2 = n2;
	c3 = n3;
	if (n1 == 55 && n2 == 56 && n3 == 57)
	{
		write(1, &c1, 1);
		write(1, &c2, 1);
		write(1, &c3, 1);
	}
	else
	{
		write(1, &c1, 1);
		write(1, &c2, 1);
		write(1, &c3, 1);
		write(1, ",", 1);
		write(1, " ", 1);
	}
}
