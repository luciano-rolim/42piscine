/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:12:09 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/02/29 18:46:05 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	num;

	if (n >= 0)
	{
		num = 'P';
	}
	else
	{
		num = 'N';
	}
	write (1, &num, 1);
}

/*
int	main()
{
	ft_is_negative(42);
	ft_is_negative(-42);
	ft_is_negative(0);
}
*/
