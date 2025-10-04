/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerman- <rgerman-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 18:17:36 by rgerman-          #+#    #+#             */
/*   Updated: 2025/10/03 22:18:50 by rgerman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_substring(char const *s, char c)
{
	size_t	strings_count;
	size_t	i;

	strings_count = 0;
	i = 0;
	if(s[i] != c)
		strings_count++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c )
			strings_count++;
		i++;
	}
	return (strings_count);
}

int count_chars_insubstr(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while(s[i] != '\0' && s[i] != c)
	{
		i++;
		count++;
	}
	return (count);

}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	int		j;
	int		string_count;
	char	**split;

	string_count = count_substring(s, c);
	split = malloc(sizeof(char *) * string_count + 1);
	if(!split)
		return NULL;
	i = 0;
	j = 0;
	while(i < string_count)
	{
		if(s[j] == c)
			j++;
		split[i] = malloc(sizeof(char) * count_chars_insubstr(&s[j], c) + 1);
		printf("COUNT CHARS: %d  ITERATOR: %d\n", count_chars_insubstr(&s[j], c), j);
		k = 0;
		while(s[j] != c && s[j + 1] != '\0')
		{
			split[i][k] = s[j];
			k++;
			j++;
		}
		split[i][k] = '\0';
		i++;
	}
	return (split);
}
