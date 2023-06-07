/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:27:14 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/06 14:11:16 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static void	print_char_index(void *n)
{
	printf("la función imprime %s \n", n);
} */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/* int main()
{
	t_list	*lst;
	
	lst = NULL;
	lst = ft_lstnew("hola");
	printf("%lu\n", sizeof(lst->content));
	lst->next = ft_lstnew("mundo");
	lst->next->next = ft_lstnew("creative");
	ft_lstiter(lst, print_char_index);
	return (free(lst->next->next), free(lst->next), free(lst), 0);
} */