/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:47:53 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/02 10:20:41 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			cont0;
	size_t			cont1;
	unsigned char	*destino;
	unsigned char	*source;

	cont0 = 0;
	cont1 = 0;
	destino = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (destino > source)
	{
		while (cont0 < n)
		{
			cont0--;
			cont1--;
			destino[cont0] = source[cont1];
		}
	}
	return (destino);
	int ft_strlen(int *str);
}

// Terminar