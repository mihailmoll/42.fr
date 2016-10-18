#include <stdlib.h>
char    ft_calcul_word(char *str)
{
        int     index;
        int     num;
        int     ver;
 
        index = 0;
        num = 0;
        ver = 1;
        while(str[index])
        {
                if (str[index] != 9 && str[index] != 32 && str[index] != '\n' && ver == 1)
                {
                        num += 1;
                        ver = 0;
                }
                if (str[index] == 9 && str[index] == 32 && str[index] == '\n')
                        ver = 1;
                index += 1;
        }
        return (num);
}
char    number_cart(char *str, int index)
{
        while (str[index] != 9 && str[index] != 32 && str[index] != '\n')
                index += 1;
        return (index);
}
char    **ft_split_whitespaces(char *str)
{
        int     i;
        int     index;
        char    ver;
        int     index_st;
        int     *string;
        int     *tab;
 
        i = 0;
        index = 0;
        ver = 1;
        index_st = 0;
        tab = (int*)malloc(sizeof(int) * (ft_calcul_word(str) + 1));
        while (i < ft_calcul_word(str))
        {
                if (str[index] != 9 && str[index] != 32 && str[index] != '\n' && ver == 1)
                {
                        string = (int*)malloc(sizeof(*string) * (number_cart(str, index)));
                        while (index_st < number_cart(str, index))
                        {
                                string[index_st] = str[index];
                                index_st += 1;
                                index += 1;
                        }
                        string[index_st] == '\0';
                        tab[i] = string;
                        index_st = 0;
                        i += 1;
                }
                if (str[index] == 9 && str[index] == 32 && str[index] == '\n')
                        ver = 1;
                index += 1;
        }
        tab[i] = 0;
        return (tab);
}
int     main(void)
{
        ft_split_whitespaces("bonjour   tout    \nle monde");
        return (0);
}