/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 09:35:27 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/17 16:28:28 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_valid_base(int l, char *base)
{
	int	i;
	int	j;

	i = 0;
	if (l <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_put_real(int long long_nbr, char *base, int l)
{
	if (long_nbr < l)
	{
		write(1, &base[long_nbr], 1);
	}
	else
	{
		ft_put_real(long_nbr / l, base, l);
		ft_put_real(long_nbr % l, base, l);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			l;
	int long	long_nbr;

	long_nbr = nbr;
	l = ft_len(base);
	if ((ft_valid_base(l, base) == 0))
	{
		return ;
	}
	if (long_nbr < 0)
	{
		long_nbr *= -1;
		write(1, "-", 1);
	}
	ft_put_real(long_nbr, base, l);
}

/*
int	main(void)
{
	int	nbr;

	nbr = 123;
	ft_putnbr_base(nbr, "0123456789");
	write (1, "\n", 1); //return 123

	nbr = 123;
	ft_putnbr_base(nbr, "01");
	write (1, "\n", 1); //return 1111011

	nbr = 123;
	ft_putnbr_base(nbr, "0123456789ABCDEF");
	write (1, "\n", 1); //return 7B

	nbr = 123;
	ft_putnbr_base(nbr, "poneyvif");
	write (1, "\n", 1); //return ofe

	nbr = 10;
	ft_putnbr_base(nbr, "0123456789");
	write (1, "\n", 1); //return 10

	nbr = 10;
	ft_putnbr_base(nbr, "01");
	write (1, "\n", 1); //return 1010

	nbr = 10;
	ft_putnbr_base(nbr, "0123456789ABCDEF");
	write (1, "\n", 1); //return A

	nbr = 10;
	ft_putnbr_base(nbr, "poneyvif");
	write (1, "\n", 1); //return on

	nbr = -123;
	ft_putnbr_base(nbr, "0123456789");
	write (1, "\n", 1); //return -123

	nbr = -123;
	ft_putnbr_base(nbr, "01");
	write (1, "\n", 1); //return -1111011

	nbr = -123;
	ft_putnbr_base(nbr, "0123456789ABCDEF");
	write (1, "\n", 1); //return -7B

	nbr = -123;
	ft_putnbr_base(nbr, "poneyvif");
	write (1, "\n", 1); //return -ofe

	nbr = 0;
	ft_putnbr_base(nbr, "0123456789");
	write (1, "\n", 1); //return 0

	nbr = 0;
	ft_putnbr_base(nbr, "01");
	write (1, "\n", 1); //return 0

	nbr = 0;
	ft_putnbr_base(nbr, "0123456789ABCDEF");
	write (1, "\n", 1); //return 0

	nbr = 0;
	ft_putnbr_base(nbr, "poneyvif");
	write (1, "\n", 1); //return p

	nbr = -2147483648;
	ft_putnbr_base(nbr, "0123456789");
	write (1, "\n", 1); //return -2147483648

	nbr = -2147483648;
	ft_putnbr_base(nbr, "01");
	write (1, "\n", 1); //return -10000000000000000000000000000000

	nbr = -2147483648;
	ft_putnbr_base(nbr, "0123456789ABCDEF");
	write (1, "\n", 1); //return -80000000

	nbr = -2147483648;
	ft_putnbr_base(nbr, "poneyvif");
	write (1, "\n", 1); //return -npppppppppp

	nbr = -123;
	ft_putnbr_base(nbr, "0");
	write (1, "\n", 1); //return null (1 digit)

	nbr = -123;
	ft_putnbr_base(nbr, "");
	write (1, "\n", 1); //return null (empty base)

	nbr = -123;
	ft_putnbr_base(nbr, "01235567890");
	write (1, "\n", 1); //return null (double 5)

	nbr = 123;
	ft_putnbr_base(nbr, "  01234567890");
	write (1, "\n", 1); //return null (double space)

	nbr = 123;
	ft_putnbr_base(nbr, "01234567890");
	write (1, "\n", 1); //return null (double 0)

	nbr = 123;
	ft_putnbr_base(nbr, "+01234567890");
	write (1, "\n", 1); //return null (wrong digit)

	nbr = 123;
	ft_putnbr_base(nbr, "-01234567890");
	write (1, "\n", 1); //return null (wrong digit)

	nbr = 123;
	ft_putnbr_base(nbr, "01234-567890");
	write (1, "\n", 1); //return null (wrong digit)
}
*/