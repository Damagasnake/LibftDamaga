/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:31:14 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/02 10:24:15 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

strlcpy(char *dst, const char *src, size_t n)
{
	size_t i;
	i = 0;
	while (src[i] != '\0' && src[i] < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}