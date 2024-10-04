/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:19:17 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/04 11:40:36 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *newstring;
	size_t len;

	i = 0;
	len = ft_strlen(s);
	newstring = (char *)malloc(len + 1);
	if (newstring == NULL)
		return (NULL);
	newstring[len] = '\0';
	while(s[i])
	{
		newstring[i] = f(i,s[i]);
		i++;
	}
	return(newstring);
}