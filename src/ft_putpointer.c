/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:46:22 by febranda          #+#    #+#             */
/*   Updated: 2025/08/29 17:20:08 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long int nb)
{
	int	count;

	count = 0;
	if (!nb)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	count += ft_putstr("0x");
	count += ft_puthex(nb, 'x');
	return (count);
}
