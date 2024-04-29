/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:57:41 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/12 07:57:16 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	var1[100];
	char	var2[100];
	int	value;

	s1 = var1;
	s2 = var2; 
	strcpy(var1, "te");
	strcpy(var2, "t");
	value = ft_strcmp(s1, s2);
	printf("%i\n", value); //valor esperado 101

	strcpy(var1, "ta");
	strcpy(var2, "te");
	value = ft_strcmp(s1, s2);
	printf("%i\n", value); //valor esperado -4

	strcpy(var1, "t");
	strcpy(var2, "t");
	value = ft_strcmp(s1, s2);
	printf("%i\n", value); //Valor esperado 0

	strcpy(var1, "t");
	strcpy(var2, "te");
	value = ft_strcmp(s1, s2);
	printf("%i\n", value); //Valor esperado -101

	strcpy(var1, "\xFF"); //Valor exadecimal xFF, 255 se unsigned, -1 se signed 
	strcpy(var2, "\x01"); //Hex 01 na tabela padrao, decimal 1 (SOH)
	value = ft_strcmp(s1, s2);
	printf("%i\n", value); //retorna 254 se tratado (se nao, retorna -2)
}
*/