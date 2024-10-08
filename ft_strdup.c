/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:43:36 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/08 12:24:19 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*src;

	src = (char *)malloc(ft_strlen(s) + 1);
	if (src == NULL)
		return (NULL);
	ft_strlcpy(src, s, ft_strlen(s) + 1);
	return (src);
}
