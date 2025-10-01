/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerman- <rgerman-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:46:47 by rgerman-          #+#    #+#             */
/*   Updated: 2025/10/01 12:33:59 by rgerman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *string)
{
    int isNegative;
    int result;
    int i;

    isNegative = 0;
    result = 0;
    i = 0;

    while (string[i] == ' ' || string [i] == '\t')
        i++;
    if (string[i++] == '-')
        isNegative = 1;
    while (string[i])
    {
        if (string[i] >= '0' && string[i] <= '9')
            result = (result * 10) + (int)(string[i] - '0');
        else
            break;
        i++;
    }
    if (isNegative)
        return (result * (-1));
    return (result);
}