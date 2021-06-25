/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:40:41 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/24 15:34:35 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	new = (t_list*)ft_calloc(1, sizeof(t_list));
	if (!new)
		return (NULL);
	(*new).content = content;
	new->next = NULL;
	return (new);
}
