/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:00:39 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/14 16:26:14 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i < nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	if (ft_is_prime(4) != 0)
		printf("KO 4 is not prime\n");
	else
		printf("OK - 4 is not prime\n");

	if (ft_is_prime(0) != 0)
		printf("KO - 0 is not prime\n");
	else
		printf("OK - 0 is not prime\n");

	if (ft_is_prime(1) != 0)
		printf("KO - 1 is not prime\n");
	else
		printf("OK - 1 is not prime\n");

	if (ft_is_prime(-5) != 0)
		printf("KO - negative is not prime\n");
	else
		printf("OK - negative is not prime\n");

	if (ft_is_prime(5) != 1)
		printf("KO - 5 is prime\n");
	else
		printf("OK - 5 is prime\n");

	if (ft_is_prime(2) != 1)
		printf("KO - 2 is prime\n");
	else
		printf("OK - 2 is prime\n");

	if (ft_is_prime(10) != 0)
		printf("KO - 10 is not prime\n");
	else
		printf("OK - 10 is not prime\n");

	if (ft_is_prime(11) != 1)
		printf("KO - 11 is prime\n");
	else
		printf("OK - 11 is prime\n");
}
*/