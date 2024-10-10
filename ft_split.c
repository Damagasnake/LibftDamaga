/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidmartinezgallego <davidmartinezgall    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:41:15 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/10 10:05:06 by davidmartin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		nstr;
	int		i;
	char	**res;
	int		index;

	index = 0;
	nstr = 0;
	i = 0;
	countstr(s, &nstr, c);
	res = allocatemem(nstr);
	res[index] = NULL;
	return (res);
}
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

static void	checkNull(int *substr, int index, char **res)
{
	if (substr == NULL)
	{
		while (index > 0)
			free(res[--index]);
		free(res);
		return (NULL);
	}
}

static void	divide_s(const char *s, char c, char **res)
{
	int	i;
	int	start;
	int	index;
	int	len;
	int	*substr;

	i = 0;
	index = 0;
	res = 0;
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
			checkNull(substr, index, res);
			ft_strlcpy(substr, s + start, len + 1);
			res[index++] = substr;
		}
	}
}
