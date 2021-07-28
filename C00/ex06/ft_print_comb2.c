/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:16:13 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/28 18:11:09 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_print_comb2(void);
void	ft_print(int n1, int n2, int n3, int n4);

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;
	int	num3;
	int	num4;

	num1 = 47;
	while (++num1 < 58)
	{
		num2 = 47;
		while (++num2 < 58)
		{
			num3 = 47;
			while (++num3 < 58)
			{
				num4 = 47;
				while (++num4 < 58)
				{
					if ((num1 + num2) < (num3 + num4))
						ft_print(num1, num2, num3, num4);
				}
			}
		}
	}
}

void	ft_print(int n1, int n2, int n3, int n4)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = n1;
	c2 = n2;
	c3 = n3;
	c4 = n4;
	if (n1 != n3 || n2 != n4)
	{
		write(1, &c1, 1);
		write(1, &c2, 1);
		write(1, " ", 1);
		write(1, &c3, 1);
		write(1, &c4, 1);
		if (((n1 + n2 + n3) != 171) || n4 != 56)
		{
			write(1, ", ", 2);
		}
		else
			write(1, "\n", 1);
	}
}
int	main()
{
	ft_print_comb2();
	return 0;
}
