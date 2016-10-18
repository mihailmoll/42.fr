/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 19:40:55 by mmihail           #+#    #+#             */
/*   Updated: 2016/07/19 19:40:57 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H
# include <unistd.h>

typedef	int(*t_ft) (int, int);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_add(int num1, int num2);
int		ft_sub(int num1, int num2);
int		ft_mul(int num1, int num2);
int		ft_div(int num1, int num2);
int		ft_mod(int num1, int num2);
#endif
