/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:22:23 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/23 14:08:05 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return(1);
	}
	else
		return(0);
}