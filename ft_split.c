/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joker <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 23:38:06 by joker             #+#    #+#             */
/*   Updated: 2021/10/12 17:22:26 by oalketbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i + 1] == c || str[i + 1] == '\0')
		{
			if (str[i] != c)
				words++;
		}
		i++;
	}
	return (words);
}

static char	*ft_put_word(char const *s, int length)
{
	int		i;
	char	*word;

	word = (char *)malloc(sizeof(char) * (length + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**ft_words(char **split, char const *str, char c)
{
	int	i;
	int	word;
	int	l;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			l = 0;
			while (str[i + l + 1] != c && str[i + l + 1])
				l++;
			split[word] = ft_put_word(str + i, (l + 1));
			i += (l + 1);
			word++;
		}
	}
	split[word] = 0;
	return (split);
}

char	**ft_split(char const *str, char c)
{
	char	**string_split;
	int		words;

	words = ft_count_words(str, c);
	string_split = (char **)malloc(sizeof(char *) * (words + 1));
	if (string_split == NULL)
		return (NULL);
	string_split = ft_words(string_split, str, c);
	return (string_split);
}
