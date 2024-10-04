/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:31:14 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/04 09:39:00 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && src[i] < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}
