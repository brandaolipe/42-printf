/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 18:35:49 by febranda          #+#    #+#             */
/*   Updated: 2025/08/29 17:40:32 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<stdarg.h>
# include	<unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_putunsig(unsigned int nb);
int	ft_puthex(unsigned long int nb, char specifier);
int	ft_putpointer(unsigned long int nb);

#endif
