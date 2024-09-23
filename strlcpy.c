/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:31:14 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/23 14:09:22 by davidma2         ###   ########.fr       */
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