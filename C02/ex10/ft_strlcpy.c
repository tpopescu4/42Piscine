/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:44:27 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/28 18:42:26 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (i);
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char dest[50];
	char dest2[50];
	char src[] = "hola que tal bro, caramelon";
	
	ft_strlcpy(dest, src, 15);
	printf(" %s\n", dest); //MIO
	strlcpy(dest2, src ,15);
	printf("\t%s\n", dest2); //NO MIO XD
	return 0;
}*/
