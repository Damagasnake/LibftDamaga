/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidmartinezgallego <davidmartinezgall    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:05:07 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/08 19:44:28 by davidmartin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str2;
	size_t	i;

	str2 = NULL;
	i = 0;
	if (!s || start >= (unsigned int)ft_strlen(s))
		return (NULL);
	if (!(str2 = (char *)malloc(len + 1)))
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
