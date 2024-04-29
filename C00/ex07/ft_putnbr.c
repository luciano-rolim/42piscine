/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:18:16 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/16 19:04:24 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	c_write(char c)
{
	write (1, &c, 1);
}

void	put_for_real(int nb)
{
	if (nb == 0)
	{
		return ;
	}
	put_for_real(nb / 10);
	c_write(nb % 10 + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		c_write('-');
		nb = -nb;
	}
	if (nb == 0)
	{
		c_write('0');
		return ;
	}
	put_for_real(nb);
}

/*
int main(void)
{
    int n = -2147483648;
    ft_putnbr(n);
    write (1, "\n", 1);

    n = 0;
    ft_putnbr(n);
    write (1, "\n", 1);

    n = 427;
    ft_putnbr(n);
    write (1, "\n", 1);

    n = -230;
    ft_putnbr(n);
    write (1, "\n", 1);

    n = 2147483647;
    ft_putnbr(n);
    write (1, "\n", 1);

    n = 1;
    ft_putnbr(n);
    write (1, "\n", 1);

    n = 10;
    ft_putnbr(n);
    write (1, "\n", 1);

    n = 100;
    ft_putnbr(n);
    write (1, "\n", 1);

    n = 111;
    ft_putnbr(n);
    write (1, "\n", 1);

    n = 101;
    ft_putnbr(n);
    write (1, "\n", 1);
}
*/