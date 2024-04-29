/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:23:42 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/05 13:23:45 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	count_total;
	int	count_values;
	int	pos;
	int	tmp;
	int	pos_plus;

	count_total = -1;
	while (++count_total < size)
	{
		pos = 0;
		count_values = -1;
		while (++count_values < size -1)
		{
			tmp = tab[pos];
			pos_plus = pos + 1;
			if (tab[pos] > tab[pos_plus])
			{
				tab[pos] = tab[pos_plus];
				tab[pos_plus] = tmp;
			}
			pos++;
		}
	}
}
