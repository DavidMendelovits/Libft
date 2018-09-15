#include "libft.h"

#define NUM "01234567890abcdef"

void        ft_putnbr_base(unsigned long long number, int base)
{
    char        number_set[16];


    if (number > base)
    {
        ft_putnbr_base(number / (unsigned long long)base, base);
    }
    if (number > base && base > 10)
    {
        ft_putchar(NUM[number % base + 10]);
    }
    else
    {
        ft_putchar(NUM[number % base]);
    }
}
