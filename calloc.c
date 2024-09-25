/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:27:11 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/25 11:11:30 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*calloc(size_t count, size_t size)
{
	size_t totsize;
	totsize = (count * size);
	void *ptr = malloc(totsize);
	if (count == 0 || size == 0)
		{
			return malloc(0);
		}
		if (totsize / size != count)
		{
			return (NULL);
		}
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, totsize);
	return(ptr);
}