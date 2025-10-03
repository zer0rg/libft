/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerman- <rgerman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:49:34 by rgerman-          #+#    #+#             */
/*   Updated: 2025/10/03 12:38:33 by rgerman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(char *str);
void	*ft_memset(void *add, int c, unsigned int n);
void	ft_bzero(void *add, unsigned int n);
void	*ft_memcpy(void *dest, const void *src, unsigned int count);
void	*ft_memmove(void *dest, const void *src, unsigned int count);
int		ft_strlcpy(char *dst, const char *src, unsigned int size);
size_t	ft_strlcat(char *dst, const char *src, int dstSize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *string);
int		ft_memcmp(const void *buf1, const void *buf2, size_t count);
void	*ft_memchr(const void *buf, int c, size_t count);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strncmp(const char *str1, const char *str2, size_t count);
int		ft_atoi(const char *string);

#endif