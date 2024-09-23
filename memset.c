/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:48:44 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/17 12:31:18 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr = (unsigned char *) s;
	int cont0;
	cont0 = 0;
	while (ptr[cont0] != '\0' && n < ptr[cont0])
	{
		ptr[cont0] = c;
		cont0++;
	}
	return(ptr);
}
