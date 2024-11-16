/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:29:53 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/11 18:43:16 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countword(const char *s, char c)
{
	int		i;
	int		word_count;
	char	*str;

	i = 0;
	word_count = 0;
	str = (char *)s;
	if (str[i] != c)
		word_count++;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] && str[i + 1] != c)
			word_count++;
		i++;
	}
	return (word_count);
}

static size_t	word_len(const char *s, char c, int i)
{
	size_t	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	**dealloc(char ***str, int j)
{
	while (j > 0)
		free(str[--j]);
	free(**str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**words_array;
	int		wc;
	int		i;
	int		j;
	size_t	wl;

	wc = countword(s, c);
	words_array = malloc((wc + 1) * sizeof(char *));
	if (!words_array)
		return (NULL);
	i = 0;
	j = 0;
	while (j < wc && s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		wl = word_len(s, c, i);
		words_array[j] = ft_substr(s, i, wl);
		if (!words_array[j])
			return (dealloc(&words_array, j));
		j++;
		i += wl;
	}
	words_array[j] = NULL;
	return (words_array);
}
