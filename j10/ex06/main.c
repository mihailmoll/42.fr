/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 19:41:12 by mmihail           #+#    #+#             */
/*   Updated: 2016/07/19 19:41:14 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int		(*g_ft[6])(int, int) = {ft_add, ft_sub, ft_mul, ft_div, ft_mod};

int	ft_is_operator(char *str)
{
	if (str[0] == '+')
		return (0);
	else if (str[0] == '-')
		return (1);
	else if (str[0] == '*')
		return (2);
	else if (str[0] == '/')
		return (3);
	else if (str[0] == '%')
		return (4);
	else
		return (-1);
}

int	ft_check(int num2, int operator)
{
	if (operator < 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (num2 == 0 && operator >= 3)
	{
		if (operator == 3)
			write(1, "Stop : division by zero\n", 24);
		if (operator == 4)
			write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int num1;
	int num2;
	int operator;

	if (argc != 4)
		return (0);
	operator = ft_is_operator(argv[2]);
	if (operator < 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[3]);
	if (ft_check(num2, operator))
	{
		ft_putnbr((long)(*g_ft[operator])(num1, num2));
		write(1, "\n", 1);
	}
	return (0);
}
