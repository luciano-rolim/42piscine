/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:24:16 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/14 11:12:58 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*
int	main(void)
{
	if(ft_iterative_power(-2, -3) != 0)
		printf("KO - power of -2, -3\n");
	else
		printf("OK - power of -2, -3\n");

	if(ft_iterative_power(-2, 3) != -8)
		printf("KO - power of -2, 3\n");
	else
		printf("OK - power of -2, 3\n");

	if(ft_iterative_power(-2, 0) != 1)
		printf("KO - power of -2, 0\n");
	else
		printf("OK - power of -2, 0\n");


	if(ft_iterative_power(0, -3) != 0)
		printf("KO - power of 0, -3\n");
	else
		printf("OK - power of 0, -3\n");

	if(ft_iterative_power(0, 0) != 1)
		printf("KO - power of 0, 0\n");
	else
		printf("OK - power of 0, 0\n");

	if(ft_iterative_power(0, 3) != 0)
		printf("KO - power of 0, 3\n");
	else
		printf("OK - power of 0, 3\n");


	if(ft_iterative_power(3, -3) != 0)
		printf("KO - power of 3, -3\n");
	else
		printf("OK - power of 3, -3\n");

	if(ft_iterative_power(3, 0) != 1)
		printf("KO - power of 3, 0\n");
	else
		printf("OK - power of 3, 0\n");

	if(ft_iterative_power(2, 2) != 4)
		printf("KO - power of 2, 2\n");
	else
		printf("OK - power of 2, 2\n");
	if(ft_iterative_power(3, 3) != 27)
		printf("KO - power of 3, 3\n");
	else
		printf("OK - power of 3, 3\n");
}
*/