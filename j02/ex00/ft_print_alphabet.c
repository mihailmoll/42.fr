/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 16:33:54 by mmihail           #+#    #+#             */
/*   Updated: 2016/07/06 16:40:16 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c)

void    ft_print_alphabet(void)
{
  char letter;

	letter = 'a';
	while (letter <= 'z')
	  {
	ft_putchar(letter);
	letter++;
    }
	return ;
}




