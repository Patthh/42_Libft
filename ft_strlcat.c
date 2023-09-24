/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 03:09:59 by pracksaw          #+#    #+#             */
/*   Updated: 2023/09/24 05:32:14 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	dl;
	size_t	sl;

	a = 0;
	b = 0;
	if (!src || !dest)
		return (0);
	while (dest[b] != '\0' && b < size)
		b++;
	dl = b;
	sl = ft_strlen(src);
	if (size == 0 || size <= dl)
		return (sl + size);
	while (src[a] != '\0' && a < size - dl -1)
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (dl + sl);
}
/*
#include <stdio.h>
#include <string.h>

int main(void) {
    unsigned int size1;
    char dest1[] = "";
    memset(dest1, 'r', 15);
    char src1[] = "lorem ipsum dolor sit amet";
    size1 = 5;
    printf("Test Case 1:\n");
    printf("Original strlcat: %zu\n", strlcat(dest1, src1, size1));
    printf("Custom ft_strlcat: %zu\n\n", ft_strlcat(dest1, src1, size1));

    unsigned int size2;
    char dest2[10] = "a";
    //memset(dest2, 'r', 15);
    char src2[] = "lorem ipsum dolor sit amet";
    size2 = 6;
    printf("Test Case 2:\n");
    printf("Original strlcat: %zu\n", strlcat(dest2, src2, size2));
    printf("Custom ft_strlcat: %zu\n\n", ft_strlcat(dest2, src2, size2));

	return (0);
}
*/
