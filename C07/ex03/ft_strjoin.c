/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:56:50 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/03/21 11:46:02 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_zero_size(void)
{
	char	*zero_size_string;

	zero_size_string = malloc(sizeof(char));
	zero_size_string[0] = '\0';
	return (zero_size_string);
}

int	ft_memory(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	m;

	i = -1;
	m = 0;
	while (++i < size && strs[i] != NULL)
	{
		j = -1;
		while (strs[i][++j])
			m++;
		j = -1;
		while ((sep[++j]) && (i < (size - 1)))
			m++;
	}
	return (m += 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_string;
	int		i;
	int		j;
	int		ns;

	i = -1;
	ns = 0;
	if (size == 0)
		return (new_string = ft_zero_size());
	if (size < 0)
		return (NULL);
	new_string = malloc(sizeof(char) * (ft_memory(size, strs, sep)));
	while (++i < size && strs[i] != NULL)
	{
		j = 0;
		while (strs[i][j])
			new_string[ns++] = strs[i][j++];
		j = 0;
		while (sep[j] && (i < (size - 1)))
			new_string[ns++] = sep[j++];
	}
	new_string[ns] = '\0';
	return (new_string);
}

/*
int	main(void)
{
	char	st1[] = "this is";
	char	st2[] = "an super awesome";
	char	st3[] = "test";
	//
	char	*test_1[3];
	char	*test_2[1];
	char	**test_3;
	//
	char	sep[] = ", ";
	char	*p_sep;
	//
	char	*new_string;
	char	*new_string_2;
	char	*new_string_3;

	p_sep = sep;
	test_1[0] = st1;
	test_1[1] = st2;
	test_1[2] = st3;
	new_string = (ft_strjoin(3, test_1, p_sep));
	printf("%s\n", new_string);
	free(new_string);

	char	ts[] = "only one string";
	test_2[0] = ts;
	new_string_2 = (ft_strjoin(1, test_2, p_sep));
	printf("%s\n", new_string_2);
	free(new_string_2);

	test_3 = NULL;
	new_string_3 = (ft_strjoin(0, test_3, p_sep));
	printf("%s\n", new_string_3);
	free(new_string_3);
}
*/