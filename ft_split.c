/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:41:15 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/11 14:00:21 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static void	free_memory(char **res, int index)
{
	while (index > 0)
		free(res[--index]);
	free(res);
}

static void	divide_s(const char *s, char c, char **res)
{
	int		i;
	char	*substr;

	i = 0, start;
	i = 0, start = 0, index;
	i = 0, start = 0, index = 0, len;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if ((len = i - start) == 0)
			continue ;
		substr = (char *)malloc(sizeof(char) * (len + 1));
		if (substr == NULL)
		{
			free_memory(res, index);
			return ;
		}
		strncpy(substr, s + start, len);
		substr[len] = '\0';
		res[index++] = substr;
	}
}

char	**ft_split(const char *s, char c)
{
	int		nstr;
	char	**res;

	nstr = 0;
	if (s == NULL)
		return (NULL);
	countstr(s, &nstr, c);
	res = allocatemem(nstr);
	if (res == NULL)
		return (NULL);
	divide_s(s, c, res);
	res[nstr] = NULL;
	return (res);
}
