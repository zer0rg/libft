/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerman- <rgerman-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:48:52 by rgerman-          #+#    #+#             */
/*   Updated: 2025/10/01 14:59:33 by rgerman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *buf, int c, size_t count)
{
    const unsigned char *ptr;
    unsigned char castedChr;

    ptr = (const unsigned char *)buf;
    castedChr = (unsigned char)c;

    while (count--)
    {
        if (*ptr == castedChr)
            return (void *)ptr;
        ptr++;
    }
    return (NULL);
}