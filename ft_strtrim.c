/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:36:47 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/03 11:28:04 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	i = 0;

	
	while ( i < len_s1 - ((begin + end) * len_set))
	{
		trimmed[i] = s1_bis[i + (len_set * begin)];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
