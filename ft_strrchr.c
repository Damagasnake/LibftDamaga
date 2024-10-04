/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:58:34 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/04 09:33:48 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	int		x;
	char	i;

	x = 0;
	i = (char)c;
	while (s[x])
	{
		x++;
	}
	while (x >= 0)
	{
		if (s[x] == i)
		{
			return ((char *)&s[x]);
		}
		x--;
	}
	return (NULL);
}
