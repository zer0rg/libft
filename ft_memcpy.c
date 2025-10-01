/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerman- <rgerman-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 19:25:49 by rgerman-          #+#    #+#             */
/*   Updated: 2025/09/30 16:25:02 by rgerman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, const void *src, unsigned int count)
{
	unsigned char *destCopy;
	unsigned char *srcCopy;

	if (!dest && !src)
        return (dest);

	srcCopy = (unsigned char *)src;
	destCopy = (unsigned char *)dest;

	while (count--)
	{
		*(destCopy++) = *(srcCopy++);
	}

	return (dest);
}