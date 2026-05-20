/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 23:56:55 by frodrig2          #+#    #+#             */
/*   Updated: 2026/05/20 01:58:47 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(const char *s, char c)
{
	unsigned int	wcount;
	unsigned int	word;

	wcount = 0;
	word = 0;
	while (*s)
	{
		if (*s != c && !word)
		{
			word = 1;	
			wcount++;
		}
		else if (word)
		{
			word = 0;
		}
		s++;
	}
	return (wcount);
}
// " ola e adeus "
size_t	ft_wordlen(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] && s[count] != c)
		count++;
	return (count);
}

void	ft_free_words(char **words, size_t i)
{
	while (i)
		free(words[i--]);
	free(words);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char			**words;
	unsigned int	wcount;
	size_t			i;
	size_t			wlen;

	wcount = ft_wordcount(s, c);
	words = (char **)malloc(sizeof(char *) * (wcount + 1));
	if (!words)
		return (NULL);
	i = 0;
	while (*s)
	{
		wlen = ft_wordlen(s, c);
		if (wlen)
		{
			words[i] = (char *)malloc(sizeof(char) * (wlen + 1));
			if (!words[i])
				ft_free_words(words, i);
			ft_strlcpy(words[i++], s, (wlen + 1));
			s += wlen;
		}
		else
			s++;
	}
	return (words);
}
