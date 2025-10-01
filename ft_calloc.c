/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerman- <rgerman-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:01:19 by rgerman-          #+#    #+#             */
/*   Updated: 2025/10/01 14:13:52 by rgerman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char *mem;
    size_t total_bytes;
    size_t max_sizet;
    size_t i;

    max_sizet = (size_t)~0;
    if (nmemb != 0 && size > max_sizet / nmemb)
        return (NULL);
    total_bytes = nmemb * size;
    mem = (unsigned char *)malloc(total_bytes);
    if (!mem)
        return (NULL);
    i = 0;
    while (i < total_bytes)
    {
        mem[i] = 0;
        i++;
    }
    return ((void *)mem);
}