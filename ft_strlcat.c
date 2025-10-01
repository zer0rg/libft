/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerman- <rgerman-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:00:41 by rgerman-          #+#    #+#             */
/*   Updated: 2025/10/01 15:07:23 by rgerman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, int dstSize){
	unsigned int    i;
	size_t          srcLen;
	size_t          dstLen;

	srcLen = ft_strlen((char *)src);
	dstLen = ft_strlen((char *)dst);

	if ((size_t)dstSize <= dstLen)
		return ((size_t)dstSize + srcLen);
	
	i = 0;
	while (src[i] != '\0' && (dstLen + i) < ((size_t)dstSize - 1))
	{
		dst[dstLen + i] = src[i];
		i++;
	}
	dst[dstLen + i] = 0;
	return (dstLen + srcLen);
}