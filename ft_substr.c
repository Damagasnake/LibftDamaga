/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:05:07 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/30 09:53:43 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str2;
    size_t i;
	str2 = NULL;
    i = 0;
	if (!s || (str2 = (char *)malloc (len + 1)))
	{
		return(NULL);
	}
	if (start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	while (len--)
	{
		str2[i] = s[start];
		i++;
		start++;
	}
	str2[i] = '\0';
	return(str2);
}