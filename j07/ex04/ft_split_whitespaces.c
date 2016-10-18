/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 12:00:15 by mmihail           #+#    #+#             */
/*   Updated: 2016/07/14 13:54:58 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int		calc_nb_words(char *str, int *size_word)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			word++;
		while (str[i] != ' ')
		{
			size_word[word - 1] = size_word[word - 1] + 1;
			i++;
		}
		while (str[i] == ' ')
			i++;
	}
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	int		nb_words;
	int		tab[10];
	char	*temp;
	char	**string = NULL;
	int		i;

	i = 0;
	nb_words = calc_nb_words(str, tab);
	*string = (char*)malloc(sizeof(*string) * (nb_words + 1));
	while (i < nb_words)
	{
		string[i] = (char*)malloc(sizeof(*temp) * (tab[i] + 1));
		i++;
	}
	return(0);
}

int	main()
{
	ft_split_whitespaces(" sebas   chapuis wuid ");
	return 0;
}
