/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlazaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 14:41:18 by vlazaren          #+#    #+#             */
/*   Updated: 2016/07/09 15:40:45 by vlazaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int r;

	r = 1;
	while (r * r < nb)
	{
		r++;
	}
	if (r * r == nb)
		return (r);
	else
		return (0);
}
