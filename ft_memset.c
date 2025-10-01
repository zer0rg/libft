/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerman- <rgerman-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:57:16 by rgerman-          #+#    #+#             */
/*   Updated: 2025/08/20 19:56:47 by rgerman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_memset(void *add, int c, unsigned int n)
{
    unsigned char *p = (unsigned char *)add;
    while(n--)
    {
        *p = (unsigned char)c;
        p++;
    }
}