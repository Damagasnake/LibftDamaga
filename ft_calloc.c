/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:27:11 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/03 10:04:20 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t totsize = count * size;
	void *ptr = malloc(totsize);
	if (count == 0 || size == 0)
	{
		return malloc(0);
	}
	if (totsize / size != count)
	{
		return NULL;
	}
	if (ptr == NULL)
	{
		return NULL;
	}
	ft_memset(ptr, 0, totsize);
	return ptr;
}