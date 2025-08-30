/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:47:08 by febranda          #+#    #+#             */
/*   Updated: 2025/08/29 17:21:10 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long int nb, char specifier)
{
	int		count;
	char	*basehex;

	count = 0;
	if (specifier == 'X')
		basehex = "0123456789ABCDEF";
	else
		basehex = "0123456789abcdef";
	if (nb < 16)
	{
		count += ft_putchar(basehex[nb]);
	}
	else
	{
		count += ft_puthex(nb / 16, specifier);
		count += ft_puthex(nb % 16, specifier);
	}
	return (count);
}
