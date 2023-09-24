/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 03:09:59 by pracksaw          #+#    #+#             */
/*   Updated: 2023/09/24 07:46:40 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	if (!src || !dest)
		return (0);
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void) {
	unsigned int size1;
	char dest1[] = "";
	memset(dest1, 'r', 15);
	char src1[] = "lorem ipsum dolor sit amet";
	size1 = 5;
	printf("Test Case 1:\n");
	printf("Original strlcpy: %zu\n", strlcpy(dest1, src1, size1));
	printf("Custom ft_strlcpy: %zu\n\n", ft_strlcpy(dest1, src1, size1));

	unsigned int size2;
	char dest2[10] = "a";
	//memset(dest2, 'r', 15);
	char src2[] = "lorem ipsum dolor sit amet";
	size2 = 6;
	printf("Test Case 2:\n");
	printf("Original strlcpy: %zu\n", strlcpy(dest2, src2, size2));
	printf("Custom ft_strlcpy: %zu\n\n", ft_strlcpy(dest2, src2, size2));

	return (0);
}
*/
