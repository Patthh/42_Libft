/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:13:21 by pracksaw          #+#    #+#             */
/*   Updated: 2023/10/02 19:18:36 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(const char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			++ret;
			while (*s && *s != c)
				++s;
		}
		else
		{
			++s;
		}
	}
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char	**retu;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	retu = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!retu)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			retu[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	retu[i] = NULL;
	return (retu);
}
