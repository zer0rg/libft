/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerman- <rgerman-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 16:07:07 by rgerman-          #+#    #+#             */
/*   Updated: 2025/09/30 18:04:48 by rgerman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    while (*str != '\0')
    {
        if (*str == (char)c)
            return ((char *)str);
        str++;
    }

    if (c == '\0')
        return ((char *)str);

    return (NULL);
}