/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:42:38 by joamiran          #+#    #+#             */
/*   Updated: 2024/03/21 15:51:19 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct struct_point
{
	int	x;
	int	y;
}	t_point;

void	set_point(t_point *point);

#endif

/*
TEST 1 - 

#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	return (0);
}
*/

/*
TEST 2 - TEST CHANGES

#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

int main(void)
{
    t_point point;

    set_point(&point);
	printf("x is %d, y is %d\n", point.x, point.y);
    return (0); 
}
*/