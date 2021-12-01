/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahmoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:46:57 by zmahmoud          #+#    #+#             */
/*   Updated: 2021/12/01 12:47:00 by zmahmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int is_conversion_char(int c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X' )
		return (1);
	return (0);
}


void check_next_char(int next_char, va_list args, int *ret)
{
	if(next_char == '%')
		ft_putchar('%', ret);
	else if (!is_conversion_char(next_char))
		ft_putchar(next_char, ret);
	else if (next_char == 'c')
		ft_putchar(va_arg(args, int), ret);
	else if (next_char == 's')
		ft_putstr(va_arg(args, char *), ret);
	else if (next_char == 'd')
		ft_putnbr(va_arg(args, int), ret);
	else if (next_char == 'i')
		ft_putnbr(va_arg(args, int), ret);
	else if (next_char == 'u')
		ft_putnbr_unsigned(va_arg(args, int), ret);
	else if (next_char == 'x')
		ft_putnbr_unsigned(va_arg(args, int), ret);
}

int ft_printf(const char *str, ...)
{
	int	i;
	int	ret;
	va_list args;
	va_start(args, str);

	i = 0;
	ret = 0;
	while (str[i])
	{
		if(str[i] == '%')
			check_next_char(str[i++ + 1], args, &ret);
		else
			ft_putchar(str[i], &ret);
		i++;
	}
	return (ret);
}


int main()
{

	int ft_ret =  ft_printf("%u\n", -123456789);


	int ret = printf("%u\n", -123456789);

	printf("ft_ret = %d | ret = %d\n", ft_ret, ret);

}