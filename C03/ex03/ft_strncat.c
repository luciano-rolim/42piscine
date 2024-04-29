/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:36:00 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/12 08:06:32 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = i;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	var1[100];
	char    var2[50];

	s1 = var1;
	s2 = var2;
	strcpy(var1, "test");
	strcpy(var2, "value");
	ft_strncat(s1, s2, 2);
	printf("%s\n", s1); // return 'testva'

	strcpy(var1, "test");
	strcpy(var2, "value");
	ft_strncat(s1, s2, 30);
	printf("%s\n", s1); //return 'testvalue'

	strcpy(var1, "test");
	strcpy(var2, "value");
	ft_strncat(s1, s2, 5);
	printf("%s\n", s1); //return 'testvalue'

	strcpy(var1, "test");
	strcpy(var2, "value");
	ft_strncat(s1, s2, 0);
	printf("%s\n", s1); //return 'test'
}
*/