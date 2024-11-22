/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:06:13 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/18 14:38:27 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char )c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

// int main()
// {
// 	char    *str = "Hello World!";
//     char    *result;

//     result = strrchr(str, '\0');
//     printf("%s\n", result); // Output: 12
//     return (0);
// }
