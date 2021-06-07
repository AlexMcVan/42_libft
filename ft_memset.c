/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:36:20 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/03 14:00:32 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*s_bis;

	s_bis = (char *)s;
	i = 0;
	while (s_bis && i < n)
	{
		s_bis[i] = c;
		i++;
	}
	return (s);
}