/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:15:16 by amarie-c          #+#    #+#             */
/*   Updated: 2021/05/25 12:24:31 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int character)
{
	if (character >= 65 && character <= 90)
		return (character + 32);
	else
		return (character);
}
