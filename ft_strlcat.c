/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:34:50 by amarie-c          #+#    #+#             */
/*   Updated: 2021/05/27 13:54:29 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int destsize)
{
	unsigned int	i;
	unsigned int	lenght_dest;
	unsigned int	lenght_src;
	char			*src_bis;

	src_bis = (char *)src;
	i = 0;
	lenght_dest = ft_strlen(dest);
	lenght_src = ft_strlen(src_bis);
	while (src_bis[i] && i + lenght_dest + 1 < destsize)
	{
		dest[lenght_dest + i] = src[i];
		i++;
	}
	dest[lenght_dest + i] = '\0';
	if (destsize < lenght_dest)
		return (lenght_src + destsize);
	else
		return (lenght_dest + lenght_src);
}
