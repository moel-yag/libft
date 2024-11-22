/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:05:54 by moel-yag          #+#    #+#             */
/*   Updated: 2024/10/23 14:06:23 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *copy;

	copy = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		copy[i] = 0;
		i++;
	}
	return (copy);
}
