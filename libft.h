/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:34:25 by amassias          #+#    #+#             */
/*   Updated: 2023/10/16 14:26:15 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

// CType

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

// String

size_t	ft_strlen(char *str);
void	ft_memset(void *ptr, int c, size_t n);
void	ft_bzero(void *ptr, size_t n);
void	ft_memcpy(void *dst, const void *src, size_t n);
void	ft_memmove(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(void *dst, const void *src, size_t size);
size_t	ft_strlcat(void *dst, const void *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);

// Stdlib

int		ft_atoi(const char *str);

#endif