/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:13:58 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/14 11:37:17 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, (power - 1)));
}

/*
int	main(void)
{
	if(ft_recursive_power(-2, -3) != 0)
		printf("KO - power of -2, -3\n");
	else
		printf("OK - power of -2, -3\n");

	if(ft_recursive_power(-2, 3) != -8)
		printf("KO - power of -2, 3\n");
	else
		printf("OK - power of -2, 3\n");

	if(ft_recursive_power(-2, 0) != 1)
		printf("KO - power of -2, 0\n");
	else
		printf("OK - power of -2, 0\n");


	if(ft_recursive_power(0, -3) != 0)
		printf("KO - power of 0, -3\n");
	else
		printf("OK - power of 0, -3\n");

	if(ft_recursive_power(0, 0) != 1)
		printf("KO - power of 0, 0\n");
	else
		printf("OK - power of 0, 0\n");

	if(ft_recursive_power(0, 3) != 0)
		printf("KO - power of 0, 3\n");
	else
		printf("OK - power of 0, 3\n");


	if(ft_recursive_power(3, -3) != 0)
		printf("KO - power of 3, -3\n");
	else
		printf("OK - power of 3, -3\n");

	if(ft_recursive_power(3, 0) != 1)
		printf("KO - power of 3, 0\n");
	else
		printf("OK - power of 3, 0\n");

	if(ft_recursive_power(2, 2) != 4)
		printf("KO - power of 2, 2\n");
	else
		printf("OK - power of 2, 2\n");
	if(ft_recursive_power(3, 3) != 27)
		printf("KO - power of 3, 3\n");
	else
		printf("OK - power of 3, 3\n");
}
*/