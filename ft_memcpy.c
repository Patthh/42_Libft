/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <marvi@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 01:09:50 by pracksaw          #+#    #+#             */
/*   Updated: 2023/09/01 01:51:01 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t slen)
{
	size_t			i;
	unsigned char	*dst_tmp;

	i = 0;
	dst_tmp = (unsigned char *)dst;
	while (i < slen)
	{
		dst_tmp[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void) {
	char source[] = "Hello, world!";
	char dest1[20];
	char dest2[20];

	size_t numBytes = sizeof(source);

	// Using ft_memcpy
	ft_memcpy(dest1, source, numBytes);

	// Using the standard memcpy
	memcpy(dest2, source, numBytes);

	printf("Source: %s\n", source);
	printf("dest1 (ft_memcpy): %s\n", dest1);
	printf("dest2 (memcpy): %s\n", dest2);

	// Compare the results
	if (memcmp(dest1, dest2, numBytes) == 0) {
		printf("Both memory copies are equal.\n");
	} else {
		printf("Memory copies are different.\n");
	}

	return (0);
}
*/
