/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:47:53 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/07 20:16:01 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destino;
	unsigned char	*source;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	destino = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (destino > source)
	{
		i = n;
		while (i > 0)
		{
			i--;
			destino[i] = source[i];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
