/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 11:49:18 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/03 11:38:44 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*newchain;
	size_t		i;

	if (ft_strlen(s) < (len + start) || len == 0)
		return (NULL);
	newchain = ft_calloc(len + 1, sizeof(char));
	i = 0;
	while (i < len)
	{
		newchain[i] = s[start + i];
		i++;
	}
	newchain[i] = '\0';
	return (newchain);
}
