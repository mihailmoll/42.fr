/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 19:58:23 by mmihail           #+#    #+#             */
/*   Updated: 2016/07/19 19:58:25 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions.h"

int		ft_atoi(char *str)
{
	int n;
	int sign;
	int num;

	n = 0;
	num = 0;
	sign = 1;
	while (str[n] == ' ' || str[n] == '\n' || str[n] == '\r' ||
		str[n] == '\t' || str[n] == '\v' || str[n] == '\f')
		n++;
	if (str[n] == '-')
	{
		sign = -1;
		n++;
	}
	else if (str[n] == '+')
		n++;
	while (str[n] != '\0')
	{
		if (str[n] < '0' || str[n] > '9')
			return (num * sign);
		num = num * 10 + str[n] - '0';
		n++;
	}
	return (num * sign);
}
