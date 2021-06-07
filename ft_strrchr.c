/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 09:56:05 by amarie-c          #+#    #+#             */
/*   Updated: 2021/05/28 11:23:38 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *searchin, int searchfor)
{
	int		i;
	char	*searchin_bis;
	
	searchin_bis = (char *)searchin;
	i = 0;
	while (searchin_bis[i] != '\0')
	{
		i++;
	}
	if (searchfor =='\0')
		return (&searchin_bis[i]);
	while (i != 0)
	{
		if (searchin_bis[i] == searchfor)
			return (&searchin_bis[i]);
		i--;	
	}
	return (NULL);
}
