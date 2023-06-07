/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:30:04 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/06 14:07:05 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str_f;

	if (!s || !f)
		return (NULL);
	str_f = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str_f)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str_f[i] = f(i, s[i]);
		i++;
	}
	str_f[i] = '\0';
	return (str_f);
}

/* static char	mi_funcion(unsigned int i, char str)
{
	i = 32;
	return (str - i);
} */

/* int	main(void)
{
	char	*str;
	char	*resultado;

	str = "?hola?guapa.?";
	printf("el resultado es: %s\n", str);
	resultado = ft_strmapi(str, mi_funcion);
	printf("el resultado es: %s\n", resultado);
	return (0);
}
 */