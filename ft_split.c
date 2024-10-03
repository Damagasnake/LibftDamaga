/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:14:10 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/02 10:21:26 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int nstr;     // Number of new substrs. to generate
	int i;        // scan *s.
	int start;    // Locate the start of each substr.
	char *substr; // Work with each substr. b4 res.
	char **res;   // Storage substr.
	int len;      // Lenght of each substr.
	int index;    // Pos. in res.
}
if (s == NULL)
{
	return (NULL);
}
while (s[i] && s[i] + 1 != c && s[i] != c)
{
	i++;
}
i = 0;