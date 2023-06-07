/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:15:53 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/06 14:08:53 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	(*del)(lst->content);
	free(lst);
}

/* int main(void)
{
	t_list	*lst;

	lst = NULL;
	const char *a = "a";
	char *b = strdup("b");
	t_type value = {a,b};
	lst = ft_lstnew(&value);*/
/* 	lst->next = ft_lstnew("mundo");
	lst->next->next = ft_lstnew("creative");  */
	/*if (lst)
	{
		printf("%s \n", lst->content);
		ft_lstdelone(lst, del);
		printf("nodo 1 %s\n", lst->content);
	}
	return (0);
} */

/*
int	main()
{
	t_list	*lst;
	char	*content = strdup("Pacorro");
	lst = (t_list *)malloc(sizeof(t_list));
	if (lst)
	{
		lst->content = content;
		lst->next = NULL;
		printf("%s \n", lst->content);
		ft_lstdelone(lst, del);
	}
	return (0);
}*/