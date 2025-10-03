/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerman- <rgerman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 18:48:50 by rgerman-          #+#    #+#             */
/*   Updated: 2025/10/03 14:02:44 by rgerman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	k;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len)
	{
		k = 0;
		while (big[i + k] == little[k] && little[k] != '\0' && (i + k) < len)
			k++;
		if (little[k] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
