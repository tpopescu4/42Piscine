/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 14:09:53 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/04 14:36:52 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	t;

	t = 0;
	while (t < n && src[t] != '\0')
	{
		dest[t] = src[t];
		t++;
	}
	while (t < n)
	{
		dest[t] = '\0';
		t++;
	}
	return (dest);
}
