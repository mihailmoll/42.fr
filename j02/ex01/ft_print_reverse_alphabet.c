/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 21:34:55 by mmihail           #+#    #+#             */
/*   Updated: 2016/07/06 21:35:00 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)

void	ft_print_reverse_alphabet(void)
{
	char letter;
	
	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
	  	letter--;
	}
	return ;
}
