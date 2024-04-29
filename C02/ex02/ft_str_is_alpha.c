/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:06:45 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/07 21:06:49 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	value;
	int	pos;

	value = 1;
	pos = 0;
	while (str[pos])
	{
		if (!(str[pos] >= 'a' && str[pos] <= 'z') && \
		!(str[pos] >= 'A' && str[pos] <= 'Z'))
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
	value = ft_str_is_alpha(str);
	printf("%i", value);
	strcpy(text, "CodinguntilIgocompletelycrazy");
	value = ft_str_is_alpha(str);
	printf("%i", value);
	strcpy(text, "3CodinguntilIgocompletelycrazy");
	value = ft_str_is_alpha(str);
	printf("%i", value);
	strcpy(text, "");
	value = ft_str_is_alpha(str);
	printf("%i", value);
	return (0);
}
*/
