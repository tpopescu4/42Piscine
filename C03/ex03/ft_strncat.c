/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:54:57 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/05 13:00:09 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	while (dest[a] != '\0')
		a++;
	b = 0;
	while (src[b] != '\0' && b < nb)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char a[50] = "Esto es para ayudar a ";
	char b[50] = "corregir xd XD XDDD";

	printf("%s\n", ft_strncat(a, b, 11));
	return 0;
}*/
