#include "libft.h"

int         ft_atoi(const char *str)
{
    int         i;
    int         len;
    int         div;
    int         p;

    i = 0;
    len = ft_strlen((char *)str);
    div = 1;
    p = len - 1;
    while (p >= 0)
    {
        i += (str[p] -'0') * div;
        div *= 10;
        p -= 1;
        ft_putnbr_base(i, 10);
        ft_putchar('\n');
    }
    return (i);
}

int         main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_putnbr_base(ft_atoi(argv[1]), 10);
    }
    return (0);
}
