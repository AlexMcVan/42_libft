/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 17:04:47 by alex              #+#    #+#             */
/*   Updated: 2021/06/24 13:59:51 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <string.h>
#include <stdio.h> */

static int	ft_countword(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count ++;
	i++;
	}
	return (count + 1);
}


char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
//	size_t	num = 0;
	size_t	k; 
	char	**wordlist;
	int		index;

	if (s == NULL || ft_strlen(s) == 0)
		return (NULL);
	wordlist = ft_calloc((ft_countword(s, c) + 1), sizeof(char*));
	if (wordlist == NULL)
	{
		free (wordlist);
		return (NULL);
	}
		i = 0;
	index = 0;
	while ((unsigned char)s[i + 1] == c && (unsigned char)s[i] == c)
	{
	//	printf("%c, %zu\n", s[i], num++);
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == c || !wordlist[index])
		{
			while (s[i] == c)
			{
				i++;
			}
			j = i + 1;
			while (s[j] != c && j < ft_strlen(s))
			{	
				j++;
			}
			wordlist[index] = ft_calloc((j - i + 2),sizeof(char));
			if (wordlist[index] == NULL)
			{
				free(wordlist[index]);
				return (NULL);
			}
		}
			k = 0;
			while ( i < j - 1 && s[i])
			{
				wordlist[index] [k] = s[i];
				i++;
				k++;
			}
			if ( i < ft_strlen(s) )
				{
				wordlist[index] [k] = s[i];
				k++;
				}	
			wordlist[index][k] = '\0';
			index++;
		
		i++;
	}
	wordlist [ft_countword(s, c)] = NULL;
	return (wordlist);
}

int ft_nbchar(char * s, char c)
{
	int i = 0;
	int count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

/*int main(void)
{
	char	chain[] = "||chi|||||";
	char	separ ='|';
//	int i = 0;
	
	ft_split(chain, separ);

	iwhile ( i <= ft_countword(chain, separ))
	{
		//printf("%s\n", chain);
		printf("%s\n", ft_split(chain,separ)[i]);
		i++;
	}
	printf ("chaine : %s \n", chain);
	printf("nb mots : %d\n",ft_countword(chain, separ));
	printf("nb char : %lu\n",strlen(chain));
	printf("nb separateur %d\n", ft_nbchar(chain,separ));
	return (0);
} */

