/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:04:17 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/12 08:08:41 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (((unsigned char)s1[i] - (unsigned char)s2[i]) != 0)
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	i = 0;
	return (i);
}

/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	var1[100];
	char    var2[100];
	int	value;

	s1 = var1;
	s2 = var2; 

	strcpy(var1, "tes");
	strcpy(var2, "tes");
	value = ft_strncmp(s1, s2, 5);
	printf("%i\n", value); //return 0

	strcpy(var1, "tes");
	strcpy(var2, "te");
	value = ft_strncmp(s1, s2, 5);
	printf("%i\n", value); //return 115

	strcpy(var1, "te");
	strcpy(var2, "tes");
	value = ft_strncmp(s1, s2, 5);
	printf("%i\n", value); //return -115

	strcpy(var1, "tes");
	strcpy(var2, "te");
	value = ft_strncmp(s1, s2, 2);
	printf("%i\n", value); //return 0

	strcpy(var1, "te");
	strcpy(var2, "tes");
	value = ft_strncmp(s1, s2, 2);
	printf("%i\n", value); //return 0

	strcpy(var1, "te ");
	strcpy(var2, "tes");
	value = ft_strncmp(s1, s2, 5);
	printf("%i\n", value); //return -83

	strcpy(var1, "tes");
	strcpy(var2, "te");
	value = ft_strncmp(s1, s2, 3);
	printf("%i\n", value); //return 115

	strcpy(var1, "\xFF"); //Hexadecimal value 'xFF', 255 if unsigned, -1 if signed 
	strcpy(var2, "\x01"); //Hex 01 in standard ascii, decimal 1 (SOH)
	value = ft_strncmp(s1, s2, 3);
	printf("%i\n", value); //return 254 if treated (if not, return -2)
}
*/