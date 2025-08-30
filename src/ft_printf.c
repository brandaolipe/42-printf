/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:26:37 by febranda          #+#    #+#             */
/*   Updated: 2025/08/29 17:39:36 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	if (specifier == 'u')
		count += ft_putunsig(va_arg(ap, unsigned int));
	if (specifier == 'x')
		count += ft_puthex(va_arg(ap, unsigned int), specifier);
	if (specifier == 'X')
		count += ft_puthex(va_arg(ap, unsigned int), specifier);
	if (specifier == 'p')
		count += ft_putpointer(va_arg(ap, unsigned long int));
	if (specifier == '%')
		count += ft_putchar('%');
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
	va_end(ap);
	return (count);
}
