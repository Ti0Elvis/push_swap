/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evera <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:46:07 by evera             #+#    #+#             */
/*   Updated: 2025/01/03 12:48:20 by evera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			count++;
			while (*s != c && *s != '\0')
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	*ft_char_skipper(char *s, char c, char x)
{
	if (x == '=')
	{
		while (*s == c && *s)
			s++;
	}
	else if (x == '!')
	{
		while (*s != c && *s)
			s++;
	}
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	*start;
	int		i;
	int		k;
	char	**phrase;
	size_t	words;

	words = ft_count_words(s, c);
	i = 0;
	phrase = (char **)malloc(sizeof(char *) * (words + 1));
	if (!phrase)
		return (0);
	while (words-- > 0)
	{
		k = 0;
		s = ft_char_skipper((char *)s, c, '=');
		start = (char *)s;
		s = ft_char_skipper((char *)s, c, '!');
		phrase[i] = (char *)malloc(sizeof(char) * ((s - start) + 1));
		while (start < s)
			phrase[i][k++] = *start++;
		phrase[i++][k] = '\0';
	}
	phrase[i] = NULL;
	return (phrase);
}
