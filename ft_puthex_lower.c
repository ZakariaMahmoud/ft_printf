#include "printf.h"

void ft_puthex_lower(unsigned long n, int *ret)
{
	char	*base;
	
	if (n >= 16)
	{
		ft_puthex_lower(n / 16, ret);
		ft_puthex_lower(n % 16, ret);
	}
	else
	{
		base = "0123456789abcdef";
		ft_putchar(base[n % 16], ret);
	}
}