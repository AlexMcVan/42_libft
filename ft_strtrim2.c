/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:09:37 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/15 15:33:10 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_strrstr(char const *s1, int len_s1, char const *set, int len_set)
{
	int i;
	int j;
	int	k;

	i = len_s1 - len_set;
	j = 0;
	while (i > -1)
	{
		k = i;
		while ( k < len_s1 )			
		{
			if ( s1[k] == set[j])
			{
				j++;
				k++;
				if (set[j] == '\0')
					return (&s1[k])
			}
			else
			{
				j = 0;
				i--;
				break;
			}
		}
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*begining;
	char	*ending;
	char	*trimmed;
	int		len_s1;
	int		len_set;
	int		malloc_len;

	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);

	begining = ft_strnstr(s1, set, len_s1);
	ending = ft_strrstr(s1, len_s1, set, len_set);

	if (begining == NULL && ending != NULL)
			malloc_len = ending - s1 +1;
	if (begining != NULL && ending == NULL)
		malloc_len = len_s1 - begining + 1;
	else
		malloc_len = ending - begining +  1;
	trimmed = ft_calloc(malloc_len * sizeof(char));
	if (trimmed == NULL)
		return (NULL);	
	while (

}
