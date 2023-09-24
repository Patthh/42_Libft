/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:02:15 by pracksaw          #+#    #+#             */
/*   Updated: 2023/09/24 13:19:58 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	blank(const char *s, int *ptr_i)
{
	int	co;
	int	i;

	co = 1;
	i = *ptr_i;
	while (s[i] >= 9 && (s[i] <= 13 || s[i] == 32))
		i++;
	if (s[i] == 45)
	{
		co *= -1;
		i++;
	}
	else if (s[i] == 43)
	{
		i++;
	}
	*ptr_i = i;
	return (co);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	res;
	int	i;

	i = 0;
	res = 0;
	sign = blank(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	res *= sign;
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main() {
    char str[] = "+548";
    
    // Using your ft_atoi function
    int result_ft = ft_atoi(str);
    printf("ft_atoi: Converted value: %d\n", result_ft);
    
    // Using the standard atoi function
    int result_std = atoi(str);
    printf("atoi: Converted value: %d\n", result_std);

    return 0;
}
*/
