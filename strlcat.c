/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:12:29 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/23 14:09:15 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
strlcat(char *dst, const char *src, size_t n)
{
    size_t y;
	size_t x;
	x = 0;
	y = 0;
	while (dst[y] != '\0' && src[x] != '\0' && src[x] < n)
	{
		y++;
		x++;
	}
	dst = dst[y] + src[x];
	dst[y] = '\0';
	
}