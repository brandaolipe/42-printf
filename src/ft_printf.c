/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:26:37 by febranda          #+#    #+#             */
/*   Updated: 2025/08/27 19:55:19 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb);

int	ft_handle_specifier(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(ap, int));
	if (specifier == 's')
		count += ft_putstr(va_arg(ap, char *));
	if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr(va_arg(ap, int));
//	if (specifier == 'u')
//		ft_putnbr();
//	if (specifier == 'x')
//		ft_putnbr();
//	if (specifier == 'X')
//		ft_putnbr();
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	size_t	count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += ft_handle_specifier(*format, ap);
			format++;
		}
		else
		{
			count += write(1, format, 1);
			format++;
		}
	}
	return (count);
}

// int	main(void)
// {
// 	int	number;
// 	number = 10;
//  	ft_printf("%d", number);
//  	return (0);
// }	
