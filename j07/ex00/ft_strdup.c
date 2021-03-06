/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 20:40:33 by mmihail           #+#    #+#             */
/*   Updated: 2016/10/06 18:58:22 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

char	*ft_strdup(char *str)
{
	char	*new_str;
	char	*to_copy;
	int		i;

	to_copy = str;
	i = ft_strlen(str + 1);
	new_str = (char*)malloc(sizeof(*new_str) * i + 1);
	new_str = to_copy;
	return (new_str);
}
