/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:32:23 by febranda          #+#    #+#             */
/*   Updated: 2025/08/28 14:47:19 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
		count += ft_putstr("-2147483648");
	else
	{
		if (nb < 0)
		{
			count += ft_putchar('-');
			nb = -nb;
		}
		if (nb < 10)
			count += ft_putchar(nb + '0');
		else
		{
			count += ft_putnbr(nb / 10);
			count += ft_putnbr(nb % 10);
		}
	}
	return (count);
}
