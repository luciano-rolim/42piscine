/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:31:00 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/12 08:06:54 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = i;
	i = 0;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*
int main(void)
{
	char	*s1;
	char	*s2;
	char	var1[100];
	char    var2[50];

	s1 = var1;
	s2 = var2;
	strcpy(var1, "test");
	strcpy(var2, "value");
	ft_strcat(s1, s2);
	printf("%s\n", s1); //return 'testvalue'

	strcpy(var1, "test");
	strcpy(var2, "");
	ft_strcat(s1, s2);
	printf("%s\n", s1); //return 'test'

	strcpy(var1, "pi");
	strcpy(var2, "rate Shrek");
	ft_strcat(s1, s2);
	printf("%s\n", s1); //return 'pirate Shrek'
}
*/