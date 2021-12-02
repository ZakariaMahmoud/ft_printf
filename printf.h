#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(char c, int *ret);
void	ft_putstr(char *s, int *ret);
void	ft_putnbr(int n, int *ret);
void	ft_putnbr_unsigned(unsigned int n, int *ret);
void	ft_puthex_lower(unsigned  long x, int *ret);
void	ft_puthex_upper(unsigned  long x, int *ret);
int		ft_printf(const char *str, ...);
void	ft_putadr(void *n, int *ret);
size_t	ft_strlen(const char *s);

#endif
