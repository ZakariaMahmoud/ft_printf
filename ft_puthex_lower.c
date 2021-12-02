/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahmoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:40:47 by zmahmoud          #+#    #+#             */
/*   Updated: 2021/12/02 14:41:15 by zmahmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_lower(unsigned int n, int *ret)
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
