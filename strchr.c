/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:32:47 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/23 14:09:04 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
char *strchr(const char *s, int c)
{
	int x;
	x = 0;
	char i;
	i = (char) c;
	while (s[x] != '\0')
	{
		if (s[x] == i)
		{
			return (s[x]);
		}
		x++;
	}
			return (NULL);
}