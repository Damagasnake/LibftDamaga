/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidmartinezgallego <davidmartinezgall    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:33:04 by davidma2          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/10/07 16:07:04 by davidmartin      ###   ########.fr       */
=======
<<<<<<< HEAD
/*   Updated: 2024/10/07 15:37:59 by davidma2         ###   ########.fr       */
=======
/*   Updated: 2024/10/07 12:36:41 by davidmartin      ###   ########.fr       */
>>>>>>> d51a4230f2f65c49c6f27013852dc80c7a04c53c
>>>>>>> 25605366150166c8764d9316d55d97d3e5104fdb
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
	if(i < 0) 
	str = (char *)(malloc(sizeof(char) * len + 2));
	else if (i > 0)
	{
		str = (char *)(malloc(sizeof(char) * len + 1));
	}
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
