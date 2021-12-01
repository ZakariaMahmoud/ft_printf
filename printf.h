#ifndef PRINTF_H
# define PRINTF_H
# include "libft.h"
# include <stdarg.h>
# include <stdio.h>

void	ft_putchar(char c, int *ret);
void	ft_putstr(char *s, int *ret);
void	ft_putnbr(int n, int *ret);
void	ft_putnbr_unsigned(unsigned int n, int *ret);
#endif
