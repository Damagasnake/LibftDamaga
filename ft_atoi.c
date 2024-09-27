/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:50:22 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/26 11:13:31 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int atoi(const char *str)
{
	int i;
	int Nsing;
	int res;
	i = 0;
	Nsing = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		{
			str++;
		}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			Nsing = -1;	
		}
			i++;
	}
	while (str[i])
	{
		res = res*10 + str[i] - '0';
		i++;
	}
	return (Nsing *res);
}
