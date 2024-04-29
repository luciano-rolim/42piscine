/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:55:07 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/20 10:55:10 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min));
	if (array)
	{
		while ((min + i) < max)
		{
			array[i] = (min + i);
			i++;
		}
		return (array);
	}
	else
		return (NULL);
}

/*
int	main(void)
{
	int *array;
	int	i;
	int	min;
	int max;
	int	len;

	i = 0;
	min = -2;
	max = 9;
	len = (max - min);
	array = ft_range(min, max);
	while(len)
	{
		printf("%i ", array[i]);
		i++;
		len--;
	}
	free(array);
	printf("\n");

	i = 0;
	min = 10;
	max = 19;
	len = (max - min);
	array = ft_range(min, max);
	while(len)
	{
		printf("%i ", array[i]);
		i++;
		len--;
	}
	free(array);
	printf("\n");
}
*/