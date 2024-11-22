/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:06:13 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/03 11:31:18 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *) haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main() {
//     const char *haystack1 = "Hello, world!";
//     const char *needle1 = "world";
//     size_t len1 = 13; // Full length

//     char *result1 = ft_strnstr(haystack1, needle1, len1);
//     printf("Test 1: '%s' -> '%s'\n", haystack1, result1 ? result1 : "NULL");

//     const char *haystack2 = "Hello, world!";
//     const char *needle2 = "planet";
//     size_t len2 = 13; // Full length

//     char *result2 = ft_strnstr(haystack2, needle2, len2);
//     printf("Test 2: '%s' -> '%s'\n", haystack2, result2 ? result2 : "NULL");

//     const char *haystack3 = "Hello, world!";
//     const char *needle3 = "lo";
//     size_t len3 = 5; // Limited length

//     char *result3 = ft_strnstr(haystack3, needle3, len3);
//     printf("Test 3: '%s' -> '%s'\n", haystack3, result3 ? result3 : "NULL");

//     const char *haystack4 = "Hello, world!";
//     const char *needle4 = "";
//     size_t len4 = 13; // Full length

//     char *result4 = ft_strnstr(haystack4, needle4, len4);
//     printf("Test 4: '%s' -> '%s'\n", haystack4, result4 ? result4 : "NULL");

//     const char *haystack5 = "Hello, world!";
//     const char *needle5 = "world";
//     size_t len5 = 5; // Limited length, should not find "world"

//     char *result5 = ft_strnstr(haystack5, needle5, len5);
//     printf("Test 5: '%s' -> '%s'\n", haystack5, result5 ? result5 : "NULL");

//     return 0;
// }