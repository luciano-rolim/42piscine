/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:01:40 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/14 16:26:38 by lmeneghe         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}

/*
int	main(void)
{
	if (ft_find_next_prime(4) != 5)
		printf("KO\n");
	else
		printf("OK\n");

	if (ft_find_next_prime(0) != 2)
		printf("KO\n");
	else
		printf("OK\n");

	if (ft_find_next_prime(1) != 2)
		printf("KO\n");
	else
		printf("OK\n");

	if (ft_find_next_prime(-999) != 2)
		printf("KO\n");
	else
		printf("OK\n");

	if (ft_find_next_prime(11) != 11)
		printf("KO\n");
	else
		printf("OK\n");

	if (ft_find_next_prime(10) != 11)
		printf("KO\n");
	else
		printf("OK\n");

	if (ft_find_next_prime(2) != 2)
		printf("KO\n");
	else
		printf("OK\n");

	if (ft_find_next_prime(3) != 3)
		printf("KO\n");
	else
		printf("OK\n");
}
*/