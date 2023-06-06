/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:18:46 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/01 16:50:45 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	len;

	len = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}

/* int main(void)
{
    t_list  *lista;
    t_list  *lista1;
    t_list  *lista2;

    lista = malloc(sizeof(*lista));
    lista1 = malloc(sizeof(*lista1));
    lista2= malloc(sizeof(*lista2));
    lista->next = lista1;
    lista1->next = lista2;
    lista2->next = NULL;
    printf("El size de la lista es de: %d\n", ft_lstsize(lista));
    free(lista);
    free(lista1);
    free(lista2);
    return (0);
} */
