/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:26:40 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/18 14:55:52 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strc;
	size_t	len_str;

	len_str = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	strc = malloc(sizeof(char) * (len_str + 1));
	if (!strc)
		return (NULL);
	ft_memcpy(strc, s1, ft_strlen(s1) + 1);
	ft_strlcat(strc, s2, len_str + 1);
	return (strc);
}
