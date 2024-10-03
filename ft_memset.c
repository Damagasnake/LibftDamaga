/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:48:44 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/02 10:20:50 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	int				cont0;

	ptr = (unsigned char *)s;
	cont0 = 0;
	while (ptr[cont0] != '\0' && n < ptr[cont0])
	{
		ptr[cont0] = c;
		cont0++;
	}
	return (ptr);
}
