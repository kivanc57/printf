/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:10:41 by kgordu            #+#    #+#             */
/*   Updated: 2024/08/15 12:53:29 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static int	print_pointer(void *ptr)
{
	if (!ptr)
		return (print_string("(nil)"));
	return (print_string("0x") + print_unsigned((unsigned long)ptr, 16, 0));
}

static int	ft_printf_checker(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char((char)va_arg(ap, int));
	else if (specifier == 's')
		count += print_string((char *)va_arg(ap, char *));
	else if (specifier == 'p')
		count += print_pointer((void *)va_arg(ap, void *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_digit((long)va_arg(ap, int), 10);
	else if (specifier == 'u')
		count += print_unsigned((unsigned long)va_arg(ap, unsigned int), 10, 0);
	else if (specifier == 'x')
		count += print_unsigned((unsigned long)va_arg(ap, unsigned int), 16, 0);
	else if (specifier == 'X')
		count += print_unsigned((unsigned long)va_arg(ap, unsigned int), 16, 1);
	else
		count += print_char(specifier);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += ft_printf_checker(*(++format), ap);
		else
			count += print_char(*format);
		++format;
	}
	va_end(ap);
	return (count);
}

// int main()
// {
// 	printf("Characters: %c %c \n", 'a', 65);
// 	ft_printf("Characters: %c %c \n", 'a', 65);

// 	printf("%s \n", "A string");
// 	ft_printf("%s \n", "A string");

// 	printf("Preceding with blanks: %d \n", 1977);
// 	ft_printf("Preceding with blanks: %d \n", 1977);

// 	int x = 10;
// 	printf("Pointer: %p \n", &x);
// 	ft_printf("Pointer: %p \n", &x);

// 	printf("Unsigned: %u \n", 65000);
// 	ft_printf("Unsigned: %u \n", 65000);

// 	printf("Hexadecimal: %x \n", 255);
// 	ft_printf("Hexadecimal: %x \n", 255);

// 	printf("Hexadecimal: %X \n", 255);
// 	ft_printf("Hexadecimal: %X \n", 255);

// 	return 0;
// }
