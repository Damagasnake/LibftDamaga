/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:46:36 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/10 17:38:06 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned const char	*init;
	unsigned char		*trg;

	i = 0;
	init = (unsigned char *)src;
	trg = (unsigned char *)dest;
	if (init == NULL || trg == NULL)
		return (NULL);
	while (i < n)	
	{
		trg[i] = init[i];
		i++;
	}
	return (trg);
}
