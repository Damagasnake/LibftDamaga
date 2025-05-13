/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:27:11 by davidma2          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/10/17 11:55:29 by davidma2         ###   ########.fr       */
=======
/*   Updated: 2025/01/16 15:08:58 by davidma2         ###   ########.fr       */
>>>>>>> 13cdcecbaffc5f7c789df8cf186abd01791b663c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	ssize_t	totsize;
	void	*ptr;

	totsize = count * size;
	ptr = malloc(totsize);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, totsize);
	return (ptr);
}
