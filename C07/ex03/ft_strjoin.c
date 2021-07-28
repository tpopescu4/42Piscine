/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 10:57:44 by amorion-          #+#    #+#             */
/*   Updated: 2021/07/28 18:06:24 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

char	*ft_strcat(char *dest, char *src, char *sep)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (*src != '\0')
		dest[i++] = *src++;
	while (*sep)
		dest[i++] = *sep++;
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strslen(int size, char **strs)
{
	int	a;
	int	b;
	int	c;

	a = 1;
	b = 0;
	while (b < size)
	{
		c = 0;
		while (strs[c])
		{
			a++;
			c++;
		}
		b++;
	}
	return (a);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*c;
	int		len;
	int		i;

	if (size == 0)
		return ((char *)malloc(sizeof(char *)));
	len = ft_strslen(size, strs);
	c = (char *)malloc((len + (size - 1) * ft_strlen(sep) + 1)
			* sizeof(char *));
	if (!c)
		return (0);
	c[0] = '\0';
	i = 0;
	while (i < size)
	{
		if (i == size - 1)
			c = ft_strcat(c, strs[i], "");
		else
			c = ft_strcat(c, strs[i], sep);
		i++;
	}
	return (c);
}
/*
int main()
{
	char *a[3];
	a[0] = "Que";
	a[1] = "Pasa";
	a[2] = "BRO?";
	printf("%s\n", ft_strjoin(3, a, "bola"));
}*/
