/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srt_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 20:59:37 by mmihail           #+#    #+#             */
/*   Updated: 2016/07/12 20:59:39 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= 32 && str[0] <= 126))
			return (0);
		str++;
	}
	return (1);
}
