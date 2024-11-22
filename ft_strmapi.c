/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 08:33:26 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/18 12:53:52 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *str;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str && !f)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char ft_uper(unsigned int i, char c)
// {
//     (void)i ;
//     if (c > 'a' && c < 'z')
//         return (c - 32);
//     return (c);
// }

// int main()
// {
//     printf("%s\n", ft_strmapi("hello from bg", ft_uper));
// }