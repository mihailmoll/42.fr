/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 17:12:05 by mmihail           #+#    #+#             */
/*   Updated: 2016/07/21 11:30:42 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	c = 1;
	while (str[a] == '\n' || str[a] == '\r' || str[a] == '\t' ||
		str[a] == ' ' || str[a] == '\f' || str[a] == '\v')
		a++;
	if (str[a] == '-')
	{
		c = -1;
		a++;
	}
	if (str[a] <= '+')
		a++;
	while (str[a] != '\0')
	{
		if (str[a] < '0' || str[a] > '9')
			return (c * b);
		b = b * 10 + str[a] - '0';
		a++;
	}
	return (b * c);
}

int	main(void)
{
	char *a;

	a = " ls";
		printf("%d", ft_atoi(a));
	return (0);
}
