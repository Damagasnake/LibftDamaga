/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:47:53 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/19 15:37:23 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t cont0;
	size_t cont1;
	cont0 = 0;
	cont1 = 0;
	unsigned char *destino = (unsigned char *) dest;
	unsigned char *source = (unsigned char *) src;
		if (destino > source)
		{
			while (cont0 < n)
			{
			cont0--;
			cont1--;
			destino[cont0] = source[cont1];
			}
		}
		return(destino);
		int	ft_strlen(int *str);
}

//Terminar