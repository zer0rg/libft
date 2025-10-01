/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerman- <rgerman-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 16:17:24 by rgerman-          #+#    #+#             */
/*   Updated: 2025/10/01 16:53:30 by rgerman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    size_t  strLen;

    strLen = ft_strlen((char *)str);

    if (c == '\0')
        return ((char *)&str[strLen]);

    while (strLen > 0)
    {
        if (str[strLen - 1] == (char)c)
            return ((char *)str);
        strLen--;
    }

    return (NULL);
}
