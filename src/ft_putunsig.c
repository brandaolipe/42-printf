/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsig.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 19:48:44 by febranda          #+#    #+#             */
/*   Updated: 2025/08/28 16:32:38 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsig(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb < 10)
	{
		count += ft_putchar(nb + '0');
	}
	else
	{
		count += ft_putunsig(nb / 10);
		count += ft_putunsig(nb % 10);
	}
	return (count);
}
