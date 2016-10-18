/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 16:26:11 by mmihail           #+#    #+#             */
/*   Updated: 2016/07/07 16:26:15 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c)

void	ft_print_comb(void)
{
	char a1;
	char b1;
	char c1;
	{
	a1 = '0';
	while (a1 <= '7')
	 {
		b1 = a1 + 1;
		while (b1 <= '8')
		{
		  	c1 = b1 + 1;
			while (c1 <= '9')
			{
			  ft_putchar(a1);
			  ft_putchar(b1);
			  ft_putchar(c1++);
			  if (a1 < '7')
			    ft_putchar(',');
			  if (a1 < '7')
			    ft_putchar(' ');
			}
			b1++;
		}
		a1++;
	 }
	}
}

