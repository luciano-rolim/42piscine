/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:37:53 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/05 10:37:55 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
/*
int	main(void)
{
	char	shrek[100];
	char	*str;
	int	len;

	strcpy(shrek, "Shrek movies are the best");
	str = shrek;
	len = ft_strlen(str);
	printf("%s\n", str);
	printf("len is %d\n", len);
}
*/
