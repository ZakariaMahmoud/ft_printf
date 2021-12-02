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

void check_next_char(int next_char, va_list args, int *ret)
{
	if(next_char == '%')
		ft_putchar('%', ret);
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
		ft_puthex_lower(va_arg(args, int), ret);
	else if (next_char == 'X')
		ft_puthex_upper(va_arg(args, int), ret);
	else if (next_char == 'p')
		ft_putadr(va_arg(args, void *), ret);
	else
		ft_putchar(next_char, ret);
	
}

int	ft_printf(const char *str, ...)
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