/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:03:37 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/22 16:50:35 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//I cast every single time because is more optimun than creating a "casted variable"
#include <unistd.h>
int strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
	i = 0;
	while (s1[i] || s2[i] && i < n )
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			return (unsigned char)(s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}