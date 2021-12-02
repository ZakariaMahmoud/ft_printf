/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahmoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:06:13 by zmahmoud          #+#    #+#             */
/*   Updated: 2021/11/26 23:32:19 by zmahmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *ret)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		nb = -n;
		ft_putchar('-', ret);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, ret);
		ft_putnbr(nb % 10, ret);
	}
	else
	{
		nb += '0';
		ft_putchar(nb, ret);
	}
}
