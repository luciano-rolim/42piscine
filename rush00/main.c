/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:46:24 by fiheaton          #+#    #+#             */
/*   Updated: 2024/03/03 18:21:02 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isalldig(char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		if (!ft_isdigit(*str))
			i = 0;
		str++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 0;
	if (str[a] == '-')
	{
		b *= -1;
		a++;
	}
	while (ft_isdigit(str[a]))
	{
		c = c * 10 + str[a] - '0';
		a++;
	}
	return (c *= b);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "plz give us 2 digits for x and y, ex: \"./a.out X Y\"\n", 52);
		return (0);
	}
	if (!ft_isalldig(argv[1]) || !ft_isalldig(argv[2]))
	{
		write(1, "only numbers bigger than 0 are valid\n", 37);
		return (0);
	}
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (1);
}
