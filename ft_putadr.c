#include "printf.h"

void	ft_putadr(void *n, int *ret)
{
	unsigned long l;

	l = (unsigned long)n;
	ft_putstr("0x", ret);
	ft_puthex_lower(l, ret);
}