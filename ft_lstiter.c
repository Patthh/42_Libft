/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:31:36 by pracksaw          #+#    #+#             */
/*   Updated: 2023/09/28 18:35:05 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	(void)f;
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include "stdio.h"
void	pc(void *content)
{
	printf("Contain : %s\n",(char *)content);
}
int	main(void)
{
t_list *lst = ft_lstnew("Hell");
ft_lstadd_back(&lst, ft_lstnew("World We livin' in"));
ft_lstiter(lst, pc);
}
*/
