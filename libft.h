/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:01:07 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/23 12:12:08 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii (int c);
int	ft_isalnum(int c);
int	ft_strlen(int *str);
void *ft_memset(void *s, int c, size_t n);
void bzero(void *s, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
strlcpy(char *dst, const char *src, size_t n);
strlcat(char *dst, const char *src, size_t n);
int toupper(int c);
int tolower(int c);
char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);


#endif