/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:58:34 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/23 14:10:02 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
char *strrchr(const char *s, int c)
{
	int x;
	x = 0;
	char i;
	i = (char) c;
	while (s[x])
	{
		x++;
	}
	while (x >= 0 )
	{
		
		if (s[x] == i)
		{
			return ((char*)s + x);
		}
		x--;
	}
			return (NULL);
}