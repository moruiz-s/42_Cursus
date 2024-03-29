/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:31:33 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/05 12:13:38 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

/* int main(void)
{
	t_list	*lst;

	lst = NULL;
	lst = ft_lstnew("hola");
	lst->next = ft_lstnew("mundo");
	printf("el nodo 1 contiene %s\n", lst->content);
	printf("el nodo 2 contiene %s\n", lst->next->content);
	return(free(lst->next), free(lst), 0);
	
	
} */