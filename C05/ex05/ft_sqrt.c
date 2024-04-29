/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:49:12 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/14 16:00:53 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = nb;
	if (nb < 0 || nb == 0)
		return (0);
	while (i >= 1)
	{
		if (i * i == nb)
			return (i);
		i--;
	}
	return (0);
}

/*
int	main(void)
{
	if (ft_sqrt(-1) != 0)
		printf("KO Root -1 not 0\n");
	else
		printf("OK Root -1 = 0\n");
	if (ft_sqrt(-10) != 0)
		printf("OK Root -10 not 0\n");
	else
		printf("OK Root -10 = 0\n");
	if (ft_sqrt(0) != 0)
		printf("OK Root 0 not 0\n");
	else
		printf("OK Root 0 = 0\n");
	if (ft_sqrt(1) != 1)
		printf("KO Root 1 not 1\n");
	else
		printf("OK Root 1 = 1\n");
	if (ft_sqrt(2) != (NULL || 0))
		printf("KO Root 2 not NULL or 0\n");
	else
		printf("OK Root 2 = NULL or 0\n");
	if (ft_sqrt(3) != (NULL || 0))
		printf("KO Root 3 not NULL or 0\n");
	else
		printf("OK Root 3 = NULL or 0\n");
	if (ft_sqrt(4) != (2))
		printf("KO Root 4 not 2\n");
	else
		printf("OK Root 4 = 2\n");
}
*/