/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahmoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:06:13 by zmahmoud          #+#    #+#             */
/*   Updated: 2021/11/26 23:32:19 by zmahmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n, int *ret)
{
	unsigned int	nb;

	nb = n;
	if (nb >= 10)
	{
		ft_putnbr_unsigned(nb / 10, ret);
		ft_putnbr_unsigned(nb % 10, ret);
	}
	else
	{
		nb += '0';
		ft_putchar(nb, ret);
	}
}
