/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:58:04 by mdias             #+#    #+#             */
/*   Updated: 2023/08/08 22:04:27 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	count_words;

	count_words = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str != c && *str != '\0')
		{
			count_words++;
			while (*str != c && *str != '\0')
				str++;
		}
	}
	return (count_words);
}

static char	*get_next_word(char const *str, char c)
{
	char	*word;
	int		i;
	int		start;
	int		len;

	i = 0;
	while (str[i] == c)
		i++;
	start = i;
	while (str[i] != c && str[i] != '\0')
		i++;
	len = i - start;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*cleanup(char **tab, int i)
{
	while (i)
		free(tab[--i]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!s || !tab)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			tab[i] = get_next_word(s, c);
			if (!tab[i])
				return (cleanup(tab, i));
			while (*s != c && *s != '\0')
				s++;
			i++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
