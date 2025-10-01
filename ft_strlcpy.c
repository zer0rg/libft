/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerman- <rgerman-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 20:20:31 by rgerman-          #+#    #+#             */
/*   Updated: 2025/09/30 12:50:31 by rgerman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}