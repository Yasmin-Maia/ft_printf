/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:58:11 by yasmin            #+#    #+#             */
/*   Updated: 2025/05/02 15:09:05 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_printf_format(const char format, va_list args);
int	ft_printf(const char *format, ...);
int	puthex(unsigned long long number, char def);
int	ft_putstr(char *str);
int	ft_putchar(int c);
int	ft_putnbr(int nb);
int	ft_putptr(void *ptr);
int	ft_putnbr_unsigned(unsigned int nb);
#endif