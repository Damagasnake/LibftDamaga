/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:46:42 by davidma2          #+#    #+#             */
/*   Updated: 2024/09/30 09:36:52 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putendl_fd(char *s, int fd)
{
	int i;
	i = 0;
    while (s[i])
    {
        write(fd, &s, 1);
        i++;
    }
	s[i] = '\n';
}