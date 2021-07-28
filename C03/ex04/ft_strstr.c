/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 13:13:09 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/06 16:59:26 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] == to_find[b] && str[a + b] != '\0')
		{
			b++;
			if (to_find[b] == '\0')
				return (&str[a]);
		}
		a++;
	}
	return (0);
}
/*
int main()
{
	char a[50] = "hola1 oala2 ohoa3 lhao4 laho5 hal";
	char b[50] = "3";

	printf("%s\n", ft_strstr(a, b));
	return 0;	
}*/
