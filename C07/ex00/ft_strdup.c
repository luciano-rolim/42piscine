/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:49:09 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/20 10:45:41 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_len(char *scr)
{
	int	i;

	i = 0;
	while (scr[i])
		i++;
	return (i);
}

char	*ft_strdup(char *scr)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc((sizeof(char)) * (ft_len(scr) + 1));
	if (dest)
	{
		while (scr[i])
		{
			dest[i] = scr[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	else
		return (NULL);
}

/*
int	main(void)
{
	char	*dest;

	printf("%s\n", dest = ft_strdup("lala"));
	free(dest);
	printf("%s\n", dest = ft_strdup(""));
	free(dest);
	printf("%s\n", dest = ft_strdup("012345"));
	free(dest);
	return (0);
}
*/