/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:05:46 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/22 17:17:57 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lennum(int n)
{
	int	ndig;
	int	temp;

	temp = n;
	ndig = 1;
	if (temp < 0)
	{
		temp = temp * -1;
		ndig++;
	}
	while (temp >= 10)
	{
		temp = temp / 10;
		ndig++;
	}
	return (ndig);
}

char	*ft_itoa(int n)
{
	char	*str_n;
	int		ndig;
	int		nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	ndig = ft_lennum(n);
	str_n = malloc((sizeof(char)) * (ndig + 1));
	nb = n;
	if (!str_n)
		return (NULL);
	str_n[ndig--] = '\0';
	if (nb < 0)
	{
		nb = nb * -1;
		str_n[0] = '-';
	}
	while (nb > 0)
	{
		str_n[ndig--] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (str_n);
}

/* int	main(void)
{
	int		n;
	char	*str_n;

	n = -152;
	str_n = ft_itoa(n);
	free(str_n);
	printf("%s", str_n);
	return (0);
} */
