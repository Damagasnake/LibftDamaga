/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:50:22 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/25 12:03:40 by davidma2         ###   ########.fr       */
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
	while (i == ' ' || i == '\t' || i == '\n' || i == '\v' || i == '\f' || i == '\r')
		{
			str++;
		}
	if (str[i] == "-" || srt[i] == "+")
	{
		if (str[i] == "-")
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
