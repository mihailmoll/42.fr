/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 16:40:25 by mmihail           #+#    #+#             */
/*   Updated: 2016/07/15 16:40:39 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		l_w(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*all(char **tab, char *sep)
{
	int	tot;
	int	num_c;

	num_c = 0;
	tot = 0;
	while (tab[num_c])
	{
		tot += l_w(tab[num_c]);
		num_c++;
	}
	num_c--;
	tot += num_c * l_w(sep) + 1;
	return ((char *)malloc(sizeof(char) * (tot)));
}

void	concat(char *dest, char *src)
{
	char	*cp;

	cp = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
}

char	*ft_join(char **tab, char *sep)
{
	char	*bank;
	int		i;

	i = 0;
	if ((bank = all(tab, sep)) == 0)
		return (0);
	while (tab[i])
	{
		concat(bank, tab[i]);
		concat(bank, sep);
		i++;
	}
	return (bank);
}
