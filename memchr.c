/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:58:35 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/26 12:41:43 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *strng;
	unsigned char Uc;
	size_t i;
	strng = s;
	Uc = c;
	i = 0;
	while (i < n)
	{
		if(strng[i] == Uc)
		{
		return ((void *) &strng[i]);
		i++;	
		}
	}
	return (NULL);
}