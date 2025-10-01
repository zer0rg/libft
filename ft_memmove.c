/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerman- <rgerman-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 19:38:10 by rgerman-          #+#    #+#             */
/*   Updated: 2025/09/30 18:04:48 by rgerman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, unsigned int count)
{
	unsigned char	*destCopy;
	unsigned char	*srcCopy;
	unsigned int	i;

	if (!dest && !src)
		return (NULL);

	destCopy = (unsigned char *)dest;
	srcCopy = (unsigned char *)src;

	if (destCopy == srcCopy || count == 0)
		return (dest);
	i = count;
	if (destCopy > srcCopy && destCopy < srcCopy + count)
		while(i-- > 0)
			destCopy[i] = srcCopy[i];
	else
	{
		i = 0;
		while(i < count)
		{
			destCopy[i] = srcCopy[i];
			i++;
		}
	}
	return (dest);
}