/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 11:49:18 by amarie-c          #+#    #+#             */
/*   Updated: 2021/05/27 15:43:45 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t ft_lenlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*newchain;
	size_t		i;

	if (ft_lenlen(s) < (len + start) || len == 0)
		return (NULL);
	newchain = (char *) malloc((len + 1) * sizeof(char));
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

int main()
{
	char s[]= "sgualala";
	printf("%s \n", ft_substr(s, 2, 0));
	return (0);

}
