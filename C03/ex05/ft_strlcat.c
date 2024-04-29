/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:08:57 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/12 13:00:54 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	i;
	unsigned int	j;

	len_d = 0;
	len_s = 0;
	i = 0;
	while (dest[len_d] != '\0')
		len_d++;
	while (src[len_s] != '\0')
		len_s++;
	j = len_d;
	if (size == 0 || size <= len_d)
		return (len_s + size);
	while ((src[i] != '\0') && (j < (size -1)))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (len_d + len_s);
}

/*
int	main(void)
{
	char	*t1;
	char	*t2;
	char	*t3;
	char	*t4;
	char	test1[100];
	char	test2[5];
	char	test3[4];
	char	test4[3];
	char	*s2;
	char	src[100];
	unsigned int	size;
	unsigned int	ft_return;

	s2 = src;
	t1 = test1;
	t2 = test2;
	t3 = test3;
	t4 = test4;
	strcpy(test1, "te");
	strcpy(test2, "te");
	strcpy(test3, "te");
	strcpy(test4, "te");
	strcpy(src, "va");

	size = sizeof(test1);
	ft_return = ft_strlcat(t1, s2, size);
	printf("Dest string now is: %s\n", test1);
    printf("Original dest + original src are %i characters\n", ft_return);
	printf("Buffer size required is %i, current is %i\n\n", ft_return + 1, size);

	size = sizeof(test2);
	ft_return = ft_strlcat(t2, s2, size);
	printf("Dest string now is: %s\n", test2);
    printf("Original dest + original src are %i characters\n", ft_return);
	printf("Buffer size required is %i, current is %i\n\n", ft_return + 1, size);

	size = sizeof(test3);
	ft_return = ft_strlcat(t3, s2, size);
	printf("Dest string now is: %s\n", test3);
    printf("Original dest + original src are %i characters\n", ft_return);
	printf("Buffer size required is %i, current is %i\n\n", ft_return + 1, size);

	size = sizeof(test4);
	ft_return = ft_strlcat(t4, s2, size);
	printf("Dest string now is: %s\n", test4);
    printf("Original dest + original src are %i characters\n", ft_return);
	printf("Buffer size required is %i, current is %i\n\n", ft_return + 1, size);
}
*/