/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:53:26 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/07 20:53:30 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	source[100];
	char	destination[100];
	char	*des;
	char	*dest;
	char	*scr;

	strcpy(source, "We are all pirates\n");
	dest = destination;
	scr = source;
	des = ft_strncpy(dest, scr, 10);
	printf("Original source is: %s\n", source);
	printf("New source is: %s\n", des);
	printf("dest pointer was modified too: %s\n", dest);
}
*/
