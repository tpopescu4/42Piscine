/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 21:57:34 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/14 22:07:51 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *c)
{
	int	a;

	a = 0;
	while (c[a] != '\0')
		a++;
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		a;

	str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!str)
		return (NULL);
	a = 0;
	while (src[a] != '\0')
	{
		str[a] = src[a];
		a++;
	}
	str[a] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char *c;

	c = ft_strdup("hola que tal");
	printf("%s\n", c);
	return 0;
}*/
