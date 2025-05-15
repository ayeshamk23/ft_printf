/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:09:42 by aymohamm          #+#    #+#             */
/*   Updated: 2023/11/25 12:17:37 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ptr(unsigned long long n)
{
	if (n >= 16)
	{
		ft_ptr(n / 16);
		ft_ptr(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar((n + '0'));
		else
			ft_putchar((n - 10 + 'a'));
	}
}

int	ft_pointer(void *ptr)
{
	int					len;
	unsigned long long	nb;

	nb = (unsigned long long)ptr;
	len = 0;
	write(1, "0x", 2);
	ft_ptr(nb);
	if (nb == 0)
	{
		len++;
	}
	while (nb > 0)
	{
		nb /= 16;
		len++;
	}
	return (len + 2);
}
