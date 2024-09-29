/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:50:22 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/24 10:09:45 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int atoi(const char *str)
{
	int i;
	int Nsing;
	int res;
	i = 0;
	Nsing = -1;
	res = 0;
	while (ft_isspace )
		{
			str++;
		}
	if (str[i] == "-")
	{
		Nsing = -1;
		i++;
	}
	if (str[i] == "-")
	{
		Nsing == -1;
	}
	while (str[i])
	{
		res = res*10 + str[i] - '0';
		i++;
	}
	return (Nsing *res);	
}
