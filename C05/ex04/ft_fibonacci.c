/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:52:07 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/14 14:38:59 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}

/*
int	main(void)
{
	if (ft_fibonacci(-3) != -1)
		printf("KO - Fibonacci -3 not -1\n");
	else
		printf("OK - Fibonacci [-3] = -1\n");
	if (ft_fibonacci(-1) != -1)
		printf("KO - Fibonacci -1 not -1\n");
	else
		printf("OK - Fibonacci [-1] = -1\n");

	if (ft_fibonacci(0) != 0)
		printf("KO - Fibonacci 0 not 0\n");
	else
		printf("OK - Fibonacci [0] = 0\n");
	if (ft_fibonacci(1) != 1)
		printf("KO - Fibonacci 1 not 1\n");
	else
		printf("OK - Fibonacci [1] = [1]\n");

	if (ft_fibonacci(6) != 8)
		printf("KO - Fibonacci 6 not 8\n");
	else
		printf("OK - Fibonacci [6] = 8\n");
}
*/