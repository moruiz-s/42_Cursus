/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:36:38 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/01 16:10:37 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*new;

	if (!lst && !*del && !*f)
		return (NULL);
	result = NULL;
	while (lst)
	{
		new = ft_lstnew ((*f)(lst->content));
		ft_lstadd_back(&result, new);
		lst = lst->next;
	}
	return (result);
}
