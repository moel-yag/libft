/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:05:54 by moel-yag          #+#    #+#             */
/*   Updated: 2024/10/23 14:06:23 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
}

static	int	count_word(char const *s, char c)
{
	int	count;
	int	flag;
	int	i;

	count = 0;
	flag = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && flag)
		{
			count++;
			flag = 0;
		}
		if (s[i] == c)
			flag = 1;
		i++;
	}
	return (count);
}

static	char	*get_word(char *dst, char const *src, char c, int	*index)
{
	int	i;
	int	start;
	int	len;

	i = *index;
	while (src[i] && src[i] == c)
		i++;
	start = i;
	while (src[i] && src[i] != c)
		i++;
	len = (i - start) + 1;
	dst = ft_calloc(len, sizeof(char));
	ft_strlcpy(dst, src + start, len);
	*index = i;
	return (dst);
}

static char	**fill_array(char **dst, char const *src, char c, int number_word)
{
	int	i;
	int	index_word;

	index_word = 0;
	i = 0;
	while (i < number_word)
	{
		dst[i] = get_word(dst[i], src, c, &index_word);
		if (!dst[i])
			ft_free(dst);
		i++;
	}
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		count;

	if (!s)
		return (NULL);
	count = count_word(s, c);
	dst = ft_calloc(count + 1, sizeof(char *));
	if (!dst)
		return (NULL);
	dst = fill_array(dst, s, c, count);
	return (dst);
}
