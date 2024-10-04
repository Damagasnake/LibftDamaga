/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:58:35 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/04 10:00:13 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*strng;
	unsigned char		uc;
	size_t				i;

	strng = s;
	uc = c;
	i = 0;
	while (i < n)
	{
		if (strng[i] == uc)
		{
			return ((void *)&strng[i]);
			i++;
		}
	}
	return (NULL);
}
