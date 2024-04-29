/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:39:12 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/21 09:58:03 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = malloc(sizeof(int) * (max - min));
	if (array)
	{
		*range = array;
		while ((min + i) < max)
		{
			array[i] = (min + i);
			i++;
		}
		return (i);
	}
	else
	{
		*range = NULL;
		return (-1);
	}
}


int	main(void)
{
	int	**range_2;
	int	min = 10;
	int	max = 14;
	int	*range_1;
	int	result;

	range_2 = &range_1;
	printf("%i\n", (result = ft_ultimate_range(range_2, min, max)));
	free(*range_2);

	min = 10;
	max = 9;
	printf("%i\n", (result = ft_ultimate_range(range_2, min, max)));
	free(*range_2);
}