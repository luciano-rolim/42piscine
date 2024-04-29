/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:49:01 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/04/29 19:01:34 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	source[100];
	char	destiny[100];
	char	*dest;
	char	*scr;

	strcpy(source, "We are all pirates\n");
	dest = destiny;
	scr = source;
	ft_strcpy(dest, scr);
	printf("Original source is: %s\n", source);
	printf("Final source is: %s\n", destiny);
}
*/