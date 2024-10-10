/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:05:07 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/10 16:54:08 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str2;
	size_t	i;

	str2 = NULL;
	i = 0;
	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	str2 = (char *)malloc(len + 1);
	if (!str2)
		return (NULL);
	while (len--)
	{
		str2[i] = s[start];
		i++;
		start++;
	}
	str2[i] = '\0';
	return (str2);
}
