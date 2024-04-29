/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:15:56 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/21 15:50:43 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	j;
	int	len;

	j = 0;
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	while (j < len)
	{
		write (1, &str[j], 1);
		j++;
	}
}

void	ft_putchar(char n)
{
	write (1, &n, 1);
}

void	ft_putnbr(int nb)
{
	long	long_nb;

	long_nb = (long)nb;
	if (long_nb < 0)
	{
		ft_putchar('-');
		long_nb = -long_nb;
	}
	if (long_nb >= 10)
	{
		ft_putnbr(long_nb / 10);
	}
	ft_putchar('0' + long_nb % 10);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar ('\n');
		ft_putnbr(par[i].size);
		ft_putchar ('\n');
		ft_putstr(par[i].copy);
		ft_putchar ('\n');
		i ++;
	}
}

/*
#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
int size;
char *str;
char *copy;
} t_stock_str;

#endif
*/