/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:33:03 by kgordu            #+#    #+#             */
/*   Updated: 2024/08/15 12:53:37 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	print_digit(long numb, int base)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (numb < 0)
	{
		print_char('-');
		return (print_digit(-numb, base) + 1);
	}
	else if (numb < base)
	{
		return (print_char(symbols[numb]));
	}
	else
	{
		count = print_digit(numb / base, base);
		return (count + print_digit(numb % base, base));
	}
}

int	print_unsigned(unsigned long numb, int base, int is_upper)
{
	int		count;
	char	*symbols;

	count = 0;
	if (!is_upper)
		symbols = "0123456789abcdef";
	else
		symbols = "0123456789ABCDEF";
	if (numb < (unsigned long)base)
		count += print_char(symbols[numb]);
	else
	{
		count = print_unsigned(numb / base, base, is_upper);
		count += print_unsigned(numb % base, base, is_upper);
	}
	return (count);
}
