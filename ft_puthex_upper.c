/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahmoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:41:32 by zmahmoud          #+#    #+#             */
/*   Updated: 2021/12/02 14:42:19 by zmahmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_upper(unsigned int n, int *ret)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_puthex_upper(n / 16, ret);
		ft_putchar(base[n % 16], ret);
	}
	else
		ft_putchar(base[n], ret);
}
