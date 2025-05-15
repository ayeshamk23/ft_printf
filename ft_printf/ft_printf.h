/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:10:57 by aymohamm          #+#    #+#             */
/*   Updated: 2023/11/24 20:38:43 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
char	*ft_char(char *s, unsigned int number, int len);
int		ft_len(int n);
char	*ft_itoa(int n);
int		ft_putnbr(int n);
int		ft_conversion(va_list vl, const char format);
int		hex_len(unsigned int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_puthex(unsigned int num, const char format);
int		ft_unsigned_len(unsigned int nb);
char	*ft_uitoa(unsigned int nb);
int		ft_putunsigned(unsigned int nb);
int		ft_pointer(void *ptr);
void	ft_ptr(unsigned long long n);

#endif