/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:50:22 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/23 14:07:06 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int atoi(const char *str)
{
    int i;
	int Nsing;
    i = 0;
	Nsing = -1;
    while (ft_isspace)
    {
		str++;
    }
    if (str[i] == "+" && str[i + 1] != "-")
	{
		i++;
	}
	if (str[i] == "-")
	{
		Nsing == -1;
	}
	while (str[i] && str[i] >= 0 && str[i] <= 9)
	{
		/* code */
	}
	
	
}