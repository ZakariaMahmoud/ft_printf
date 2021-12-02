#include "ft_printf.h"

void ft_puthex_upper(unsigned int  n, int *ret)
{
	char	*base;

	if (n >= 16)
	{
		ft_puthex_upper(n / 16, ret);
		ft_puthex_upper(n % 16, ret);
	}
	else
	{
		base = "0123456789ABCDEF";
		ft_putchar(base[n], ret);
	}
}