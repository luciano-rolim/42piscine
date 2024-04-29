/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:18:14 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/16 19:04:21 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			write(1, &"0123456789"[n1 / 10], 1);
			write(1, &"0123456789"[n1 % 10], 1);
			write(1, " ", 1);
			write(1, &"0123456789"[n2 / 10], 1);
			write(1, &"0123456789"[n2 % 10], 1);
			if (n1 != 98)
				write(1, ", ", 2);
			n2++;
		}
		n1++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
}
*/