/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:41:15 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/09 11:38:26 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		nstr;
	int		i;
	int		start;
	char	*substr;
	char	**res;
	int		len;
	int		index;

	index = 0;
	nstr = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] && s[i + 1] != c && s[i] != c)
		i++;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			nstr++;
			while (s[i] && s[i] != c)
				i++;
		}
	}

	res = allocatemem(nstr);
	if (res == NULL)
		return (NULL);

	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			len = i - start;
			substr = (char *)malloc(sizeof(char) * (len + 1));
			if (substr == NULL)
			{
				while (index > 0)
				{
					free(res[--index]);
				}
				free(res);
				return (NULL);
			}
			ft_strlcpy(substr, s + start, len + 1);
			res[index] = substr;
			index++;
		}
	}
	res[index] = NULL;
	return (res);
}

static char **allocatemem(int nstr)
{
	char **res;

	res = (char **)malloc(sizeof(char *) * (nstr + 1));
	if (res == NULL)
		return (NULL);
	return (res);
}
