/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:46:36 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/11 11:18:21 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*init;
	unsigned char		*trg;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	init = (const unsigned char *)src;
	trg = (unsigned char *)dest;
	while (i < n)
	{
		trg[i] = init[i];
		i++;
	}
	return (trg);
}

/*int	main(void)
{
	char	src[] = "Hello, world!";
	char	dest[20];

	ft_memcpy(dest, src, sizeof(src));
	return (0);
}
*/