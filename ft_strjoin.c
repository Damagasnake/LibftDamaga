/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:01:57 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/08 12:25:52 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sfinal;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	sfinal = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!sfinal)
		return (NULL);
	ft_strlcpy(sfinal, s1, len1 + 1);
	ft_strlcat(sfinal, s2, len1 + len2 + 1);
	return (sfinal);
}
