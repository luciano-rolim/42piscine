/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:16:50 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/07 21:16:52 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	value;
	int	pos;

	value = 1;
	pos = 0;
	while (str[pos])
	{
		if (!(str[pos] >= 'a' && str[pos] <= 'z'))
			value = 0;
		pos++;
	}
	return (value);
}

/*
int	main(void)
{
	char	text[100];
	char	*str;
	int	value;

	strcpy(text, "Coding until I go completely crazy");
	str = text;
	value = ft_str_is_lowercase(str);
	printf("%i", value);
	strcpy(text, "CodinguntilIgocompletelycrazy");
	value = ft_str_is_lowercase(str);
	printf("%i", value);
	strcpy(text, "codinguntiligocompletelycrazy");
	value = ft_str_is_lowercase(str);
	printf("%i", value);
	strcpy(text, "");
	value = ft_str_is_lowercase(str);
	printf("%i", value);
	return (0);
}
*/
