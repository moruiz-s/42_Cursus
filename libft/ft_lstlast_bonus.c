/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:35:16 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/05 12:24:58 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*endlst;

	if (!lst)
		return (NULL);
	endlst = lst;
	while (endlst->next != NULL)
		endlst = endlst->next;
	return (endlst);
}

/* int main(void)
{
    t_list  *lst;
   	t_list	*nodoend;

    lst = ft_lstnew("hola");
	lst->next = ft_lstnew("mundo");
	lst->next->next = ft_lstnew("adios");
   	nodoend = ft_lstlast(lst);
    printf("El ultimo nodo de la lista contiene: %s\n", nodoend->content);
    return (free(lst->next->next), free(lst->next), free(lst), 0);
}
 */