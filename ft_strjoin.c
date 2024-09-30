/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:01:57 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/30 12:35:10 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    i = 0;
    char *Sfinal;
    Sfinal = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) *sizeof(char));
    
    if (!Sfinal || !s1 || !s2)
    {
		return (0);
    }
    strlcpy(Sfinal, s1, 100);
    strlcat(Sfinal, s2, 100);
}
free(Sfinal);