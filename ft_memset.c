/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:05:54 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/18 14:01:36 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *copy;

	i = 0;
	copy = (unsigned char *)b;
	while (i < len)
	{
		copy[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
