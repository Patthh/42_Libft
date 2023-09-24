/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:18:10 by pracksaw          #+#    #+#             */
/*   Updated: 2023/09/24 11:47:39 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lil, size_t len)
{
	const char	*big_ptr;
	const char	*little_ptr;

	if (!*lil)
		return ((char *)big);
	while (*big != '\0' && len > 0)
	{
		big_ptr = big;
		little_ptr = lil;
		while (*big_ptr == *little_ptr && *big_ptr != '\0' && len > 0)
		{
			big_ptr++;
			little_ptr++;
			len--;
			if (*little_ptr == '\0')
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
