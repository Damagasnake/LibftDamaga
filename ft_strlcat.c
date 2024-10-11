/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:12:29 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/11 11:44:57 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	total_len;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst[dst_len] != '\0')
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	total_len = dst_len + src_len;
	if (n <= dst_len)
		return (src_len + n);
	while (src[i] != '\0' && dst_len + i < n - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (total_len);
}
