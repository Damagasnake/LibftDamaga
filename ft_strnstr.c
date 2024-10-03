/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:11:14 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/03 10:15:17 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t x;
	i = 0;
	x = 0;
	if (little[i] == '\0')
	{
		return (big);
	}
	while (big[x] && i < len)
	{
		while (big[i + x] == little[x] && big[i + x] && i + x < len)
		{
			x++;
		}
		if (little[x] == '\0')
		{
			return ((char *)&big[i]);
		}
		i++;
		x = 0;
	}
	return (NULL);
}