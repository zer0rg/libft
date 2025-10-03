/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerman- <rgerman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:10:37 by rgerman-          #+#    #+#             */
/*   Updated: 2025/10/03 14:30:34 by rgerman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	src_len;
	size_t	i;

	src_len = (size_t)ft_strlen((char *)s);
	substr = malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start] && start < src_len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	if (substr[i] != '\0')
		substr[i] = '\0';
	return (substr);
}
