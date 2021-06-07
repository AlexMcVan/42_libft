/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:36:20 by amarie-c          #+#    #+#             */
/*   Updated: 2021/05/21 16:35:28 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_bis;
	char	*src_bis;

	dest_bis = (char *)dest;
	src_bis = (char *)src;
	i = 0;
	while (src && i < n)
	{
		dest_bis[i] = src_bis[i];
		i++;
	}
	return (dest);
}
