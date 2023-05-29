/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:31:33 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/29 18:01:58 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(*t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

int	main(void)
{
	char 	str[] = "hola que tal";
	t_list	*elem;

	elem = ft_lstnew((void *)str);
	printf("%s\n", list->content);
	return(0);
}
