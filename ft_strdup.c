/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:43:36 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/02 10:21:54 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*strdup(const char *s)
{
	char	*ptr;

	ptr = (char *)malloc(strlen(s) + 1);
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, s);
	return (ptr);
}
