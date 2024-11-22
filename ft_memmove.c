/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:05:54 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/18 12:31:57 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_move(unsigned char *dest_tmp, const unsigned char *src_tmp,
			size_t n)
{
	size_t	i;

	i = 0;
	if (dest_tmp < src_tmp)
	{
		while (i < n)
		{
			dest_tmp[i] = src_tmp[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			dest_tmp[i - 1] = src_tmp[i - 1];
			i--;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_tmp;
	const unsigned char	*src_tmp;

	dest_tmp = (unsigned char *)dest;
	src_tmp = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (n == 0 || dest == src)
		return (dest);
	ft_move(dest_tmp, src_tmp, n);
	return (dest);
}
// "hello"