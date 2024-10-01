/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:51:28 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/01 10:58:42 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  end;
    size_t  len;
    char    *trimmed_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
		if (start == end)
			return (ft_strdup(""));
			end--;
	while (end > start && ft_strchr(set, s1[end]))
			end--;
			len = end - start + 1;
	trimmed_str = (char *)malloc((len + 1) * sizeof(char));
	if (!trimmed_str)
		return (NULL);
	trimmed_str = ft_substr(s1, &s1[start], len + 1);
	return (trimmed_str);
	}
							