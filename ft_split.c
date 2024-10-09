/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:41:15 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/09 13:20:28 by davidma2         ###   ########.fr       */
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
	countstr(s, &nstr, c);
	res = allocatemem(nstr);
	// insert static 3
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
static void	divide_s(const char *s, char *substr, char c, char **res)
{
	int i;
	int start;
	int index;
	int len;
	
	i = 0;
	index = 0;
	res = 0;
	len = ft_strlen(s);

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
}
