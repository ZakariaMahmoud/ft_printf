#include "ft_printf.h"

void ft_puthex(unsigned long n, int *ret)
{
	char	*base;
	
	if (n >= 16)
	{
		ft_puthex(n / 16, ret);
		ft_puthex(n % 16, ret);
	}
	else
	{
		base = "0123456789abcdef";
		ft_putchar(base[n % 16], ret);
	}
}

void	ft_pointer(void *n, int *ret)
{
	unsigned long l;

	l = (unsigned long)n;
	ft_putstr("0x", ret);
	ft_puthex(l, ret);
}