/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahmoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:35:54 by zmahmoud          #+#    #+#             */
/*   Updated: 2021/12/02 14:36:48 by zmahmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long n, int *ret)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_puthex(n / 16, ret);
		ft_putchar(base[n % 16], ret);
	}
	else
		ft_putchar(base[n], ret);
}

void	ft_pointer(void *n, int *ret)
{
	unsigned long	l;

	l = (unsigned long)n;
	ft_putstr("0x", ret);
	ft_puthex(l, ret);
}
