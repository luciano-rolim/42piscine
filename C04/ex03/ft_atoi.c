/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:24:40 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/04/29 19:02:31 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	np;
	int	nbr;

	i = 0;
	np = 1;
	nbr = 0;
	while ((str[i] >= 7 && str[i] <= 13) || (str[i] == 32))
	{
		i++;
	}
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			np *= -1;
		}
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		nbr = nbr * 10 + str[i] - 48;
		i++;
	}
	return (nbr * np);
}

/*
int	main(void)
{
	char	c_num[100] = "  -56^&*(7";
	char	*ptr;
	int		response;

	ptr = c_num;

	response = ft_atoi(ptr);
	printf("%d\n", response); //return -56

	ptr = "  --56^&*(7";
	response = ft_atoi(ptr);
	printf("%d\n", response); //return 56

	ptr = "67";
	response = ft_atoi(ptr);
	printf("%d\n", response); //return 67

	ptr = "0";
	response = ft_atoi(ptr);
	printf("%d\n", response); //return 0

	ptr = "-0";
	response = ft_atoi(ptr);
	printf("%d\n", response); //return 0

	ptr = "   --+++---1";
	response = ft_atoi(ptr);
	printf("%d\n", response); //return -1

	ptr = "   --+++-++20]67";
	response = ft_atoi(ptr);
	printf("%d\n", response); //return -20

	ptr = "   ---+--+1234ab567";
	response = ft_atoi(ptr);
	printf("%d\n", response); //return -1234
 
	ptr = "   ---+-}-+1234ab567";
	response = ft_atoi(ptr);
	printf("%d\n", response); //return 0

	ptr = " vg ---+-}-+1234ab567";
	response = ft_atoi(ptr);
	printf("%d\n", response); //return 0

    ptr = "-2147483648";
	response = ft_atoi(ptr);
	printf("%d\n", response); //return -2147483648

    ptr = "   2147483647";
	response = ft_atoi(ptr);
	printf("%d\n", response); //return 2147483647

    ptr = "10";
	response = ft_atoi(ptr);
	printf("%d\n", response); //return 10

    ptr = "   ^&* 1(0";
	response = ft_atoi(ptr);
	printf("%d\n", response); //return 0
}
*/