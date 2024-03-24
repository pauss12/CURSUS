/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:15:15 by pmendez-          #+#    #+#             */
/*   Updated: 2023/10/28 17:44:51 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_below_sixteen(unsigned long long number)
{
	int	numchar;
	int	aux;

	numchar = 0;
	aux = 0;
	if (number <= 9)
	{
		aux = ft_printchar(number + 48);
		if (aux == -1)
			return (-1);
		numchar = numchar + aux;
	}
	else
	{
		aux = ft_printchar(number - 10 + 'a');
		if (aux == -1)
			return (-1);
		numchar = numchar + aux;
	}
	return (numchar);
}

int	ft_print_hexa_changed(unsigned long long number)
{
	int	numchar;

	numchar = 0;
	if (number >= 16)
	{
		numchar = numchar + ft_print_hexa_changed(number / 16);
		numchar = numchar + ft_print_hexa_changed(number % 16);
	}
	else
	{
		numchar = print_below_sixteen(number);
	}
	return (numchar);
}

int	ft_printpointer(unsigned long long pointer)
{
	int	numchar;
	int	aux;

	numchar = 0;
	aux = 0;
	aux = ft_printstr("0x");
	if (aux == -1)
		return (-1);
	numchar = numchar + aux;
	numchar = numchar + ft_print_hexa_changed(pointer);
	return (numchar);
}

int main() {
    int value = 42;
    int *ptr = &value;
    ft_printf("Address: %p\n", ptr);
    return 0;
}