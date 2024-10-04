/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:53:07 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/04 09:51:53 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1 = (const unsigned char *)s1;
	const unsigned char	*str2 = (const unsigned char *)s2;
	size_t				i;

	i = 0;
	while (i <= n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
	}
	return (0);
}
