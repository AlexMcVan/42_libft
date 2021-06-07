/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 17:04:47 by alex              #+#    #+#             */
/*   Updated: 2021/06/04 12:05:56 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	int	i;
	int	count;
	char	s_bis;
	char	*
	

	i = 0;
	count = 0;
	while (s[i])
	{
		while ( s[i] != c)
		{
		count++;
		}
		s_bis = (char) calloc((count + 1) * sizeof(char));
		if (s_bis == NULL)
			return NULL;
		count = 0;	
			
			
	i++;
	}
}
