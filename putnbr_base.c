#include "libft.h"
#include <stdio.h>

int         main(int argc, char **argv)
{
    int     i;

    i = 16;
    if (argc == 2)
    {
        while (i > 1)
        {    
         //   printf("\nbase %i: ---->", i);
            ft_putnbr_base(atoi(argv[1]), i);
            i -= 1;
            printf("\n");
        }
    }
    return (0);
}
