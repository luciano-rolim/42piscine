/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:20:14 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/07 21:20:16 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	value;
	int	pos;

	value = 1;
	pos = 0;
	while (str[pos])
	{
		if (!(str[pos] >= 32 && str[pos] <= 126))
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

	str = text;
	strcpy(text, "CODING WHATE@#$%^&*(VER");
	value = ft_str_is_printable(str);
	printf("%i", value);
	strcpy(text, "COD|ING");
	value = ft_str_is_printable(str);
	printf("%i", value);
	strcpy(text, "");
	value = ft_str_is_printable(str);
	printf("%i", value);
	return (0);
}
*/
