/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:21:53 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/07 21:21:56 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if ((str[pos] >= 'a' && str[pos] <= 'z'))
			str[pos] -= 32;
		pos++;
	}
	return (str);
}

/*
int	main(void)
{
	char	text[100]; //crio um array char ate 100 caracteres
	char	*text_pointer; //crio um pointer char
	char	*newtext;

	text_pointer = text;
	strcpy(text, "Coding until I go completely crazy\n");
	newtext = ft_strupcase(text_pointer);
	printf("%s", newtext);
	strcpy(text, "CodingUNTILcompletely crazy\n");
	newtext = ft_strupcase(text_pointer);
	printf("%s", newtext);
	strcpy(text, "Coding!@#$%^&*12345678\n");
	newtext = ft_strupcase(text_pointer);
	printf("%s", newtext);
	return (0);
}
*/
