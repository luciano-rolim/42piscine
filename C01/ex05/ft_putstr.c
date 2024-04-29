/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:09:51 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/05 09:09:54 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1); 
		str++;
	}
}

/*
int	main(void)
{
	char	*str;
	char	queen_bohemian_rapsody[100];

	strcpy(queen_bohemian_rapsody, "is this the real life...\n");
	str = queen_bohemian_rapsody;
	ft_putstr(str);
	return (0);
}
*/
