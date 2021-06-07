/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:28:59 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/04 09:17:09 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s_bis;
	size_t	i;

	i = 0;
	s_bis = (char *)s;
	while (s_bis && i <= n && s_bis[c] != c)
	{
		i++;
	}
	if (s_bis[i] == c)
		return (&s_bis[i]);
	else
		return (NULL);
}
