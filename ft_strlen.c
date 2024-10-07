/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:03:32 by davidma2          #+#    #+#             */
/*   Updated: 2024/10/07 10:05:49 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	int	cont0;

	cont0 = 0;
	while (str[cont0] != '\0')
	{
		cont0++;
	}
	return (cont0);
}
