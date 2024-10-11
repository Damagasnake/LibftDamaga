/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:41:15 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/11 15:59:49 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**allocatemem(int nstr)
{
	char	**res;

	res = (char **)malloc(sizeof(char *) * (nstr + 1));
	if (res == NULL)
		return (NULL);
	return (res);
}

static void	countstr(const char *s, int *nstr, char c)
{
	int	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i] && (s[i + 1] != c || s[i] != c))
		i++;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			(*nstr)++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
}

static void	checknull(char *substr, int index, char **res)
{
	if (substr == NULL)
	{
		while (index > 0)
			free(res[--index]);
		free(res);
		return ;
	}
}

static void	divide_s(const char *s, char c, char **res)
{
	int		i;
	int		start;
	int		index;
	int		len;
	char	*substr;

	i = 0;
	start = 0;
	index = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			len = i - start;
			if (len != 0)
			{
				substr = (char *)malloc(sizeof(char) * (len + 1));
				checknull(substr, index, res);
				strncpy(substr, s + i, len);
				substr[len] = '\0';
				res[index++] = substr;
			}
		}
		else
			i++;
	}
}

char	**ft_split(const char *s, char c)
{
	int		nstr;
	char	**res;

	nstr = 0;
	countstr(s, &nstr, c);
	res = allocatemem(nstr);
	if (res == NULL)
		return (NULL);
	divide_s(s, c, res);
	res[nstr] = NULL;
	return (res);
}
