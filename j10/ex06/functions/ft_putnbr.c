/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 19:58:51 by mmihail           #+#    #+#             */
/*   Updated: 2016/07/19 19:58:53 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions.h"

void	ft_putnbr(int nb)
{
	char t;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb >= 10)
			ft_putnbr(nb / 10);
		t = '0' + (nb % 10);
		write(1, &t, 1);
	}
}
