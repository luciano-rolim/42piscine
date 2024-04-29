/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:03:33 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/04 19:03:36 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div_a;

	div_a = *a;
	*a = *a / *b;
	*b = div_a % *b;
}

/*
int	main(void)
{
	int	*a;
	int	*b;
	int	number1_div_result;
	int	number2_div_mod;

	a = &number1_div_result;
	b = &number2_div_mod;
	number1_div_result = 50;
	number2_div_mod = 7;
	printf("first *a is %d\n", *a);
	printf("and *b is %d\n", *b);
	printf("now lets run this freaking code\n\n ... \n\n ... \n\n");
	ft_ultimate_div_mod(a, b);
	printf("now *a (div) is %d\n", number1_div_result);
	printf("and now *b (mod) is %d\n", number2_div_mod);
	return (0);
}
*/
