/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:03:37 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/03 10:22:52 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// I cast every single time because is more optimun than creating a "casted variable"
#include "libft.h"
#include <unistd.h>

int	strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] || s2[i] && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			return (unsigned char)(s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
