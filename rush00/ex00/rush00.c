/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:50:57 by fiheaton          #+#    #+#             */
/*   Updated: 2024/03/03 18:31:15 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_error(int x, int y)
{
	if (x == -2147483648 || y == -2147483648)
	{
		write(1, "No INT_MIN shenanigans for you\n", 31);
		return (0);
	}
	if (x <= 0 || y <= 0)
	{
		write(1, "X and Y have to be more than 0\n", 31);
		return (0);
	}
	return (1);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (!ft_error(x, y))
		return ;
	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i <= x)
		{
			if ((i == 0 || i == x - 1) && (j == 0 || j == y - 1))
				ft_putchar('o');
			else if ((j == 0 || j == y - 1) && (0 < i && i < x))
				ft_putchar('-');
			else if ((i == 0 || i == x - 1) && (0 < j && j < y))
				ft_putchar('|');
			else if (i == x)
				ft_putchar('\n');
			else if (i < x && j < y)
				ft_putchar(' ');
		}
	}
}
