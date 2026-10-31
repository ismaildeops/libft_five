/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:51:53 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/10/22 17:51:55 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*copy_word(char const *s, size_t start, size_t end)
{
	char	*word;
	size_t		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < end - start)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_words(char **words, size_t count)
{
	while (count > 0)
		free(words[--count]);
	free(words);
}

static int	fill_words(char **words, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		words[j] = copy_word(s, start, i);
		if (!words[j])
		{
			free_words(words, j);
			return (1);
		}
		j++;
	}
	words[j] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	if (!s)
		return (NULL);
	words = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!words)
		return (NULL);
	if (fill_words(words, s, c) == 1)
		return (NULL);
	return (words);
}
