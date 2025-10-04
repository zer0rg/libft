/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerman- <rgerman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 18:17:36 by rgerman-          #+#    #+#             */
/*   Updated: 2025/10/04 22:00:36 by rgerman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		count_chars_insubstr(char const *s, char **str, char c);

size_t	count_substrs(char *s, char c)
{
	int		in_delimiter;
	size_t	substrs_count;

	in_delimiter = 1;
	substrs_count = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (!in_delimiter)
			{
				substrs_count++;
				in_delimiter = 1;
			}
		}
		if (*s != c)
		{
			in_delimiter = 0;
		}
		s++;
	}
	if (!in_delimiter)
		substrs_count++;
	return (substrs_count);
}

int	alloc_substrs(char **strarr, char const *s, char c)
{
	size_t	i;
	size_t	k;

	i = 0;
	while (*s)
	{
		k = 0;
		while (*s == c)
			s++;
		if (*s != c)
		{
			if (!count_chars_insubstr(s, &strarr[i], c))
				return (0);
			while (*s != c && *s)
			{
				strarr[i][k] = *s++;
				k++;
			}
			strarr[i][k] = 0;
			i++;
		}
	}
	return (1);
}

int	count_chars_insubstr(char const *s, char **str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		count++;
	}
	*str = malloc(sizeof(char) * (count + 1));
	if (!*str)
		return (0);
	return (count);
}

void	free_split(char **split, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	substrs_count;

	if (NULL == s)
		return (NULL);
	substrs_count = count_substrs((char *)s, c);
	split = malloc(sizeof(char *) * (substrs_count + 1));
	if (!split)
		return (NULL);
	split[substrs_count] = NULL;
	if (!alloc_substrs(split, s, c))
	{
		free_split(split, substrs_count);
		return (NULL);
	}
	return (split);
}
