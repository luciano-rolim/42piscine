/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:16:20 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/07 21:16:23 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	value;
	int	pos;

	value = 1;
	pos = 0;
	while (str[pos])
	{
		if (!(str[pos] >= '0' && str[pos] <= '9'))
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
	value = ft_str_is_numeric(str);
	printf("%i", value);
	strcpy(text, "3CodinguntilIgocompletelycrazy");
	value = ft_str_is_numeric(str);
	printf("%i", value);
	strcpy(text, "3");
	value = ft_str_is_numeric(str);
	printf("%i", value);
	strcpy(text, "");
	value = ft_str_is_numeric(str);
	printf("%i", value);
	return (0);
}
*/
