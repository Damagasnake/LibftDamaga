/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:32:47 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/27 09:58:48 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char *ft_strchr(const char *s, int c)
{
    int x;

    x = 0;
    while (s[x])
    {
        if (s[x] == (char)c)
        {
            return (char *)&s[x];
        }
        x++;
    }
    if (s[x] == (char)c)
    {
        return (char *)&s[x];
    }
    return (NULL);
}
