/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:09:58 by aymohamm          #+#    #+#             */
/*   Updated: 2023/11/25 12:16:43 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(va_list v, const char format)
{
	int	char_printed;

	char_printed = 0;
	if (format == 'c')
		char_printed += ft_putchar(va_arg(v, int));
	else if (format == 's')
		char_printed += ft_putstr(va_arg(v, char *));
	else if (format == 'p')
		char_printed += ft_pointer(va_arg(v, void *));
	else if (format == 'd' || format == 'i')
		char_printed += ft_putnbr(va_arg(v, int));
	else if (format == 'u')
		char_printed += ft_putunsigned(va_arg(v, unsigned int));
	else if (format == 'x' || format == 'X')
		char_printed += ft_puthex(va_arg(v, unsigned int), format);
	else if (format == '%')
		char_printed += ft_putchar('%');
	return (char_printed);
}

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	v;
	int		char_printed;

	i = 0;
	char_printed = 0;
	va_start(v, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			char_printed += ft_conversion(v, format[i + 1]);
			i++;
		}
		else
			char_printed += ft_putchar(format[i]);
		i++;
	}
	va_end(v);
	return (char_printed);
}
