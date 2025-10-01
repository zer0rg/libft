/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerman- <rgerman-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 18:48:50 by rgerman-          #+#    #+#             */
/*   Updated: 2025/10/01 15:09:19 by rgerman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	while(i < len)
	{
		k = 0;
		while(big[i + k] == little[k] && little[k] != '\0' && (i + k) < len)			
			k++;
		if (little[k] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
	
}