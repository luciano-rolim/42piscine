/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 08:43:47 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/13 08:52:17 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
int    main(void)
{
    char    test[100] = "hello";
    char    *ptr;

    ptr = test;
    ft_putstr(ptr);
	write(1, "\n", 1);

	strcpy(test, "test just to make sure");
	ft_putstr(ptr);
	write(1, "\n", 1);
}
*/