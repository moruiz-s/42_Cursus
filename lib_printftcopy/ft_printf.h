/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:47:47 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/21 17:36:00 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printchr(char c);
int		ft_printstr(char *str);
int		ft_printf(char const *str, ...);
int		ft_decimal(int n);
int		ft_decimal_us(unsigned int n);
int		ft_hexadecimal(unsigned long long n, char c);
int		ft_printpointer(unsigned long long n);

#endif