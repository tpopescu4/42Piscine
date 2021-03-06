/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 14:53:49 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/04 14:56:46 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	t;
	int	r;

	t = 0;
	r = 1;
	if (str[t] == '\0')
		return (r);
	while (str[t] != '\0')
	{
		if (str[t] < 65 || str[t] > 90)
			r = 0;
		t++;
	}
	return (r);
}
