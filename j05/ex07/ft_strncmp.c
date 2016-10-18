/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 11:43:33 by mmihail           #+#    #+#             */
/*   Updated: 2016/07/12 11:44:13 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (*s1 > *s2)
			return (1);
		if (*s1 == *s2)
			return (0);
		if (*s1 < *s2)
			return (-1);
		i++;
	}
	s1++;
	s2++;
	return (3);
}