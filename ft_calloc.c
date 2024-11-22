/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:06:21 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/18 14:35:02 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*copy;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	copy = malloc(count * size);
	if (!copy)
		return (NULL);
	ft_bzero(copy, size * count);
	return (copy);
}
