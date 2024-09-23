/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:46:36 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/19 11:06:21 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void *memcpy(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char *source;
	unsigned char *destino;
	
	i = 0;
	source = (unsigned char *) src;
	destino = (unsigned char *) dest;
	while (i < n)
	{
		destino[i] = source[i];
		i++;
	}
	return (destino);
}