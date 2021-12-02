/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahmoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:39:45 by zmahmoud          #+#    #+#             */
/*   Updated: 2021/12/02 14:40:34 by zmahmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(char c, int *ret);
void	ft_putstr(char *s, int *ret);
void	ft_putnbr(int n, int *ret);
void	ft_putnbr_unsigned(unsigned int n, int *ret);
void	ft_puthex_lower(unsigned int x, int *ret);
void	ft_puthex_upper(unsigned int x, int *ret);
int		ft_printf(const char *str, ...);
void	ft_pointer(void *n, int *ret);
size_t	ft_strlen(const char *s);

#endif
