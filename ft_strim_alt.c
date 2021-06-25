/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:36:47 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/14 11:43:06 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_strrnstr*(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*haystack_bis;
	char	*needle_bis;

	i = 0;
	j = 0;
	haystack_bis = (char *)haystack;
	needle_bis = (char *)needle;
	if (ft_strlen(needle) == 0 || needle == NULL)
		return (haystack_bis);
	while (haystack_bis[i] != 0)
	{
		i++;
	}
	while (i > -1)
	{
		if (haystack_bis[i - len] == needle_bis[len - j -1])
			j++;
		else
			j = 0;
		if (needle_bis[j] == '\0')
			return (haystack_bis + 1 + i - j);
		i--;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	len_set;
	size_t	i;
	size_t		begin;
	size_t		end;
	size_t		end_count;
	char	*trimmed;
	char	*s1_bis;

	begin = 0;
	end = 0;
	s1_bis = (char *)s1;
	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	if (ft_strnstr(s1, set, len_set) != NULL)
		begin = 1;
	i = 0;
	end_count = 0;
	while(i < len_set)
	{
	if (ft_strrchr(s1, set[i]) != NULL)
		end_count ++;
	i++;
	}
	if (end_count == len_set)
		end = 1;
	trimmed = ft_calloc(len_s1 - ((begin + end) * len_set) + 1, sizeof(char));
	if (trimmed = NULL)
		return (NULL);
	i = 0;

	
	while ( i < len_s1 - ((begin + end) * len_set))
	{
		trimmed[i] = s1_bis[i + (len_set * begin)];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
