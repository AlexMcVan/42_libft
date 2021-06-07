/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:36:20 by amarie-c          #+#    #+#             */
/*   Updated: 2021/05/21 16:53:28 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	 i;
	char	 *s_bis;

	s_bis = (char *)s;
	i = 0;
	while (s_bis && i < n)
	{
		s_bis[i] = 0;
		i++;
	}
}
