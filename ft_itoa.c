/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:33:04 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/07 20:19:01 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countdigits(int i)
{
	int	cont;

	cont = 0;
	if (i <= 0)
	{
		cont = 1;
	}
	while (i != 0)
	{
		i /= 10;
		cont++;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nbr;

	nbr = n;
	len = countdigits(n);
	str = (char *)(malloc(sizeof(char) * len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	else if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
