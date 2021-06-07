/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 10:19:53 by amarie-c          #+#    #+#             */
/*   Updated: 2021/05/26 14:09:17 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int dstsize)
{
	unsigned int	i;
	unsigned int	lenght_dest;
	unsigned int	lenght_src;
	char			*src_bis;

	src_bis = (char *)src;
	i = 0;
	lenght_dest = 0;
	lenght_src = 0;
	while (src_bis[lenght_src] != '\0')
	{
		lenght_src++;
	}
	while (dest[lenght_dest] != '\0')
	{
		lenght_dest++;
	}
	while (i < dstsize - 1)
	{
		dest[i] = src_bis[i];
		i++;
	}
	dest[i] = '\0';
	return (lenght_src);
}
