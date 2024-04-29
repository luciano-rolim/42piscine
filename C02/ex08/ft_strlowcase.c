/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:22:56 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/07 21:22:58 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if ((str[pos] >= 'A' && str[pos] <= 'Z'))
			str[pos] += 32;
		pos++;
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
	strcpy(text, "CODING UNTIL I GO completely crazy\n");
	newtext = ft_strlowcase(text_pointer);
	printf("%s", newtext);
	strcpy(text, "CodingUNTILcompletely crazy\n");
	newtext = ft_strlowcase(text_pointer);
	printf("%s", newtext);
	strcpy(text, "CODING!@#$%^&*12345678\n");
	newtext = ft_strlowcase(text_pointer);
	printf("%s", newtext);
	return (0);
}
*/
