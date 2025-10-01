/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerman- <rgerman-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:45:25 by rgerman-          #+#    #+#             */
/*   Updated: 2025/10/01 15:05:31 by rgerman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *string)
{
    char* dup;
    size_t strlen;

    strlen = ft_strlen((char *)string);
    dup = malloc(sizeof(char) * (strlen + 1));
    if (!dup)
        return (NULL);
    ft_strlcpy(dup, string, strlen + 1);
    return (dup);
}