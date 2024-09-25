/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:11:51 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/25 11:34:25 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
/*void	ft_isalpha(int	*str)
{
	int	cont0;
	cont0 = 0;
	while (str[cont0] != '\0' && str[cont0 <= 65 || >= 90])
	{
		cont0++;
		return('0')
		else return ('1')
	}
	
}*/
int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
#include <stdio.h>
int main(void)
{
	int c;
	int res;
	c = 'l';
	res = ft_isalpha(c);
	printf("El entero es: %i\n",res);
	return(0);
}
