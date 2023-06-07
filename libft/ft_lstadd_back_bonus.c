/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:30:51 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/06 10:51:24 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*count;

	count = *lst;
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(count)->next = new;
}

/*int main(void)
{
    t_list  *lst;
    t_list  *nodonew;
	
    lst = NULL;
	lst = ft_lstnew("hola");
	lst->next = ft_lstnew("mundo");
	nodonew = NULL;
	nodonew = ft_lstnew("adios");
    ft_lstadd_back(&lst, nodonew);
    printf("El ultimo nodo de la lista unida: %s\n", lst->next->next->content);
    return (free(lst->next->next), free(lst->next), free(lst), 0);
} */