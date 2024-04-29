/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:43:02 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/12 08:45:10 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && (to_find[j] != '\0'))
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	var1[100];
	char	var2[100];
	char	*ptr1;
	char	*ptr2;
	char	*position;

	ptr1 = var1;
	ptr2 = var2;

	strcpy(var1, "teste Elvis");
	strcpy(var2, "Elvis");
	position = ft_strstr(ptr1, ptr2);
	printf("%s\n", position); //Return 'Elvis'

	strcpy(var1, "test super test Elvis 123 lalala");
	strcpy(var2, "Elvis");
	position = ft_strstr(ptr1, ptr2);
	printf("%s\n", position); //Return 'Elvis 123 lalala'

	strcpy(var1, "teste Elvis");
	strcpy(var2, "Elvi42s");
	position = ft_strstr(ptr1, ptr2);
	printf("%s\n", position); //return '(null)'

	strcpy(var1, "teste Elvis");
	strcpy(var2, "");
	position = ft_strstr(ptr1, ptr2);
	printf("%s\n", position); //return 'teste Elvis;
}
*/