/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerman- <rgerman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 18:17:36 by rgerman-          #+#    #+#             */
/*   Updated: 2025/10/03 20:02:36 by rgerman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_substring(char const *s, char c)
{
	size_t	strings_count;
	size_t	i;

	strings_count = 0;
	i = 0;
	while (s[i] != NULL)
	{
		if (s[i] == c && s[i + 1] != NULL)
			strings_count++;
		i++;
	}
	return (strings_count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		k;
	int		string_count;
	char	**split;

	string_count = count_substring(s, c);
	split = malloc(sizeof(char *) * string_count);
	i = 0;
	while(i < string_count)
	{
		k = 0;
		while(split[i][k] != '\0')
	}
	
}
