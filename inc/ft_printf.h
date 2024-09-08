/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 00:05:40 by kgordu            #+#    #+#             */
/*   Updated: 2024/08/12 17:52:16 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Standard C Libraries

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

// Protoypes
int	ft_printf(const char *format, ...);
int	print_char(int c);
int	print_string(char *str);
int	print_digit(long numb, int base);
int	print_unsigned(unsigned long numb, int base, int is_upper);

#endif