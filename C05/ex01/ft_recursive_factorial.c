/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:03:32 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/14 11:41:02 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
int	main(void)
{
	if(ft_recursive_factorial(5) != 5*4*3*2*1)
	{
		printf("KO - factorial of 5\n");
	}
	else
	{
		printf("OK - factorial of 5\n");
	}
	if(ft_recursive_factorial(1) != 1)
	{
		printf("KO - factorial of 1\n");
	}
	else
	{
		printf("OK - factorial of 1\n");
	}
	if(ft_recursive_factorial(0) != 1)
	{
		printf("KO - factorial of 0\n");
	}
	else
	{
		printf("OK - factorial of 0\n");
	}
	if(ft_recursive_factorial(-3) != 0)
	{
		printf("KO - factorial of negative number\n");
	}
	else
	{
		printf("OK - factorial of negative number\n");
	}
}
*/