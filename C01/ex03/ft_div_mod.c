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

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;
	int	divide;
	int	module;

	a = 50;
	b = 10;
	div = &divide;
	mod = &module;
	divide = 0;
	module = 0;
	ft_div_mod(a, b, div, mod);
	printf("div is %d\n", divide);
	printf("mod is %d\n", module);
	return (0);
}
*/
