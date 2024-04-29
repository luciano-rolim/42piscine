/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:13:30 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/21 15:14:22 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	absolute(int x)
{
	if (x < 0)
		return (x * -1);
	return (x);
}

# define ABS(value) absolute(value)
#endif

/*
file ft.c

#include <stdio.h>
#include "ft_abs.h"

int main(void) 
{
    int a = -5;
    int b = 3;
    
    printf("O valor absoluto de %d é %d\n", a, ABS(a));
    printf("O valor absoluto de %d é %d\n", b, ABS(b));
    
    return 0;
}
*/