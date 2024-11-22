/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:06:21 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/18 14:39:42 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*copy;

	if (!s1 || !s2)
		return (NULL);
	copy = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		copy[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		copy[i + j] = s2[j];
		j++;
	}
	copy[i + j] = '\0';
	return (copy);
}
