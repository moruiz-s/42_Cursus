/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:28:06 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/19 16:52:26 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lenn(int n)
{
	int	i;
	int	temp;

	temp = n;
	i = 1;
	if (temp < 0)
	{
		temp = temp * -1;
		i++;
	}
	while (temp >= 10)
	{
		temp = temp / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str_n;
	int		i;
	int		len;

	i == 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = ft_lenn(n);
	str_n = malloc(sizeof(char) * (len + 1));
	
	return (str_n);
}
