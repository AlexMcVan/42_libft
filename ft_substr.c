/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 11:49:18 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/10 15:42:03 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*newchain;
	size_t		i;

	if ( len == 0 || s == NULL || ft_strlen(s) < (start + len))
		return (NULL);
	newchain = ft_calloc(len + 1, sizeof(char));
	if (newchain == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		newchain[i] = s[start + i];
		i++;
	}
	newchain[i] = '\0';
	return (newchain);
}
	#include <stdio.h>
int main(void)
{
	char const s[]="01234";
	unsigned int start = 10;
	size_t len = ft_strlen(s);

	printf("%s\n", ft_substr(s, start, len));

return (0);
}
