/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:21:07 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/05 12:26:06 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

int main(void)
{
	t_list	*lst;
	t_list	*ndnew;
	
	lst = NULL;
	lst = ft_lstnew("hola");
	lst->next = ft_lstnew("mundo");
	printf("%s\n", lst->content);
	printf("%s\n", lst->next->content);
	ndnew = ft_lstnew("creative");
	ft_lstadd_front(&lst, ndnew);
	printf("%s\n", lst->content);
	printf("%s\n", lst->next->content);
	printf("%s\n", lst->next->next->content);
	return(free(lst->next->next), free(lst->next), free(lst), 0);
}
