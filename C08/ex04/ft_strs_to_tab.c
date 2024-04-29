/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:15:18 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/21 15:51:04 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*str_copy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;

	len = ft_strlen(src);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy)
	{
		str_copy(src, copy);
		copy[len] = '\0';
	}
	else
		return (NULL);
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock_tab;
	int			i;

	i = 0;
	stock_tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock_tab)
		return (NULL);
	else
	{
		while (i < ac)
		{
			stock_tab[i].size = ft_strlen(av[i]);
			stock_tab[i].str = av[i];
			stock_tab[i].copy = ft_strdup(av[i]);
			if (stock_tab[i].copy)
				i++;
			else 
				free(stock_tab[i].copy);
		}
	}
	stock_tab[ac].str = 0;
	return (stock_tab);
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