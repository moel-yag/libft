/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:06:21 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/08 11:35:50 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(const char *s1, const char *set)
{
    size_t i;
    size_t j;
    char *trimmed;

    trimmed = 0;
    if (s1[0] == '\0')
        return (ft_strdup(""));
    if (s1 && set)
    {
        i = 0;
        j = ft_strlen(s1);
        while (s1[i] && ft_strchr(set, s1[i]))
            i++;
        while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
            j--;
        trimmed = (char *)malloc(sizeof(char) * (j - i + 1));
        if (trimmed)
            ft_strlcpy(trimmed, &s1[i], j - i + 1);
    }
    return ((char *)trimmed);
}

// int main()
// {
//     const char *test_cases[] = {
//         "   Hello, World!   ",
//         "  \t   Hello   ",
//         "   \t\t  ",      // Only spaces and tabs
//         "",               // Empty string
//         "NonEmpty",       // String without any trimming characters
//         "abcabcabc",      // String that has no characters in `set`
//         "   ",            // String with only spaces
//         "abc",            // String with no leading or trailing `set` chars
//         "   \t  ",         // Only leading and trailing spaces/tabs
//     };

//     const char *set = "\t"; // Trimming spaces and tabs

//     for (int i = 0; i < 9; i++)
//     {
//         const char *str = test_cases[i];
//         char *trimmed_str = ft_strtrim(str, set);

//         if (trimmed_str)
//         {
//             printf("Original: '%s'\n", str);
//             printf("Trimmed: '%s'\n", trimmed_str);
//             free(trimmed_str);  // Free the allocated memory
//         }
//         else
//         {
//             printf("Memory allocation failed for input: '%s'\n", str);
//         }
//     }
//     return 0;
// }