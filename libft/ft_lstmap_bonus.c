/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:36:38 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/07 17:16:35 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*new;
	void	*tmp;

	if (!lst && !*del && !*f)
		return (NULL);
	result = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		new = ft_lstnew (tmp);
		if (!new)
		{
			free(tmp);
			ft_lstclear(&new, del);
		}
		ft_lstadd_back(&result, new);
		lst = lst->next;
	}
	return (result);
}
