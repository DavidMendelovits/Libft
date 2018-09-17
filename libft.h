#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

void            ft_putchar(char c);
void            ft_putstr(char *str);
void            ft_putnbr_base(unsigned long long, int base);
void            *ft_memset(void *s, int c, size_t n);
void            ft_bzero(void *s, size_t n);
int             ft_atoi(const char *str);
int             ft_strlen(char *str);
int             b_printf(const char *format, ...);
#endif
