/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 13:16:58 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/04 15:55:52 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src_bis;
	char	*dest_bis;
	char	temp;
	size_t	i;

	i = 0;
	src_bis = (char *)src;
	dest_bis = (char *)dest;
	while (src_bis == NULL ||(src_bis && i < n))
	{
		temp = src_bis[i];
		dest_bis[i] = temp;
		i++;
	}
	return (dest);
}

int main(void)
{
	char	src[] = "pipou";
	char	dest1[] ="abcdefghijklmnopkrstuvwxyz";
	char	dest2[] ="abcdefghijklmnopkrstuvwxyz";
	char* ptr_src = &src;
	char* ptr2 = ptr1 + 10;
	size_t n = 23;

	printf("%s\n", memmove(ptr1,ptr2, n));
	printf("%s\n\n", ft_memmove(ptr1,ptr2, n));

	printf("%s\n", dest1);
	printf("%s\n", dest2);

	return (0);
}
