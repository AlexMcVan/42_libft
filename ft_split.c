/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 12:44:51 by amarie-c          #+#    #+#             */
/*   Updated: 2021/07/15 09:49:09 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{	
			count++;
			while (s[i] != c && s[i + 1] != '\0')
				i++;
		}
		i++;
	}
	return (count);
}

static char	*ft_newword(char const *s, int startword, char *buffer, char c)
{
	int	s_cursor;
	int	buffer_cursor;
	int	nb_char;

	buffer_cursor = 0;
	nb_char = 0;
	s_cursor = startword;
	while (s[s_cursor] != c && s[s_cursor] != '\0')
		s_cursor++;
	nb_char = nb_char + s_cursor - startword;
	s_cursor = startword;
	buffer = ft_calloc(nb_char + 1, sizeof(char));
	if (!buffer)
	{
		free(buffer);
		return (NULL);
	}
	while (s[s_cursor] != c && s[s_cursor] != '\0')
	{
		buffer[buffer_cursor] = s[s_cursor];
		buffer_cursor++;
		s_cursor++;
	}
	buffer[buffer_cursor] = '\0';
	return (buffer);
}

static int	*word_start(char const *s, char c, int nb_word)
{
	int	*wordstart;
	int	i;
	int	word;

	wordstart = ft_calloc(nb_word, sizeof (int));
	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			wordstart[word] = i;
			word ++;
			while (s[i] != c && s[i + 1] != '\0')
				i++;
		}
		i++;
	}
	return (wordstart);
}

static char	**ft_newwordlist(int nb_word)
{
	char	**wordlist;

	wordlist = ft_calloc(nb_word, sizeof (char *));
	if (!wordlist)
	{
		free (wordlist);
		return (NULL);
	}
	return (wordlist);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**wordlist;
	int		*start_word;

	if (!s || ft_strlen(s) == 0 || !c || ft_countword(s, c) == 0)
		return (NULL);
	start_word = word_start(s, c, ft_countword(s, c));
	wordlist = ft_newwordlist(ft_countword(s, c) + 1);
	i = 0;
	while (i < ft_countword(s, c))
	{
		wordlist[i] = ft_newword(s, start_word[i], wordlist[i], c);
		i++;
	}	
	wordlist [i] = NULL;
	return (wordlist);
}
