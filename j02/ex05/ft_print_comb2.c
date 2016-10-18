/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcojocar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 21:45:26 by mcojocar          #+#    #+#             */
/*   Updated: 2016/07/07 21:51:01 by mcojocar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char n);

void	ft_output(char a, char b, char c, char d)
{
    if ((a * 10 + b) < (c * 10 + d))
    {
        ft_putchar(a);
        ft_putchar(b);
        ft_putchar(' ');
        ft_putchar(c);
        ft_putchar(d);
        if (a != '9' || b != '8' || c != '9' || d != '9')
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
    }
    return ;
}

void	ft_whiles(char a, char b, char c, char d)
{
    while (a <= '9')
    {
        while (b <= '9')
        {
            while (c <= '9')
            {
                while (d <= '9')
                {
                    ft_output(a, b, c, d);
                    d++;
                }
                d = '0';
                c++;
            }
            c = '0';
            b++;
        }
        b = '0';
        a++;
    }
    return ;
}

void	ft_print_comb2(void)
{
    char a;
    char b;
    char c;
    char d;
    
    a = '0';
    b = '0';
    c = '0';
    d = '0';
    ft_whiles(a, b, c, d);
    return ;
}
