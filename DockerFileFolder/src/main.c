/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:06:48 by kgordu            #+#    #+#             */
/*   Updated: 2024/09/05 17:07:54 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int main()
{
	printf("Characters: %c %c \n", 'a', 65);
	ft_printf("Characters: %c %c \n", 'a', 65);

	printf("%s \n", "A string");
	ft_printf("%s \n", "A string");

	printf("Preceding with blanks: %d \n", 1977);
	ft_printf("Preceding with blanks: %d \n", 1977);

	int x = 10;
	printf("Pointer: %p \n", &x);
	ft_printf("Pointer: %p \n", &x);

	printf("Unsigned: %u \n", 65000);
	ft_printf("Unsigned: %u \n", 65000);

	printf("Hexadecimal: %x \n", 255);
	ft_printf("Hexadecimal: %x \n", 255);

	printf("Hexadecimal: %X \n", 255);
	ft_printf("Hexadecimal: %X \n", 255);

	return 0;
}