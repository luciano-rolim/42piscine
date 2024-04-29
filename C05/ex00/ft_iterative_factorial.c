/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:55:44 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/14 11:51:03 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = nb;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (f > 1)
	{
		nb *= (f - 1);
		f--;
	}
	return (nb);
}

/*
int	main(void)
{
	if(ft_iterative_factorial(5) != 5*4*3*2*1)
	{
		printf("KO - factorial of 5\n");
	}
	else
	{
		printf("OK - factorial of 5\n");
	}
	if(ft_iterative_factorial(4) != 4*3*2*1)
	{
		printf("KO - factorial of 4\n");
	}
	else
	{
		printf("OK - factorial of 4\n");
	}
	if(ft_iterative_factorial(1) != 1)
	{
		printf("KO - factorial of 1\n");
	}
	else
	{
		printf("OK - factorial of 1\n");
	}
	if(ft_iterative_factorial(0) != 1)
	{
		printf("KO - factorial of 0\n");
	}
	else
	{
		printf("OK - factorial of 0\n");
	}
	if(ft_iterative_factorial(-3) != 0)
	{
		printf("KO - factorial of negative number\n");
	}
	else
	{
		printf("OK - factorial of negative number\n");
	}
}
*/