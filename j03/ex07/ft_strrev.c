/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 20:00:42 by mmihail           #+#    #+#             */
/*   Updated: 2016/07/08 21:12:13 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	str2;
	int		p;
	int		c;

	p = 0;
	while (str[p] != '\0')
		p++;
	p--;
	c = 0;
	while (str2[c] != '\0')
	{
		str2[p] = str[c];
		p++;
		c--;
	}
	return (str2);
}
