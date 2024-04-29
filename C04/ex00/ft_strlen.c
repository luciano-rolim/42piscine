/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 08:34:08 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/13 08:45:56 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i])
	{
		len++;
		i++;
	}
	return (len);
}

/*
int	main(void)
{
	int	size;
	size = ft_strlen("Hi");
	printf("%i\n", size); //return 2

	size = ft_strlen("");
	printf("%i\n", size); //return 0

	size = ft_strlen("test");
	printf("%i\n", size); //return 4

	size = ft_strlen("123");
	printf("%i\n", size); //return 3
}
*/