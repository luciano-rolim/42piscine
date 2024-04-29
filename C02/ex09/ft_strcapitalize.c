/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:23:48 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/17 07:59:27 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = i - 1;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') \
				&& (str[j] < 'a' || str[j] > 'z') \
				&& (str[j] < 'A' || str[j] > 'Z') \
				&& (str[j] < '0' || str[j] > '9'))
			str[i] -= 32;
		i++;
		j++;
	}
	return (str);
}

/*
int	main(void)
{
	char	text[100];
	char	*text_pointer;
	char	*newtext;

	text_pointer = text;
	strcpy(text, "cODINg until i go completely crazy\n");
	newtext = ft_strcapitalize(text_pointer);
	printf("%s", newtext);
	strcpy(text, "cod0inguntil 34COMplete lyttc  &rfghf&fhaz+ydfghj\n");
	newtext = ft_strcapitalize(text_pointer);
	printf("%s", newtext);
	strcpy(text, "coding I GO Completely crazy\n");
	newtext = ft_strcapitalize(text_pointer);
	printf("%s", newtext);
	return (0);
}
*/