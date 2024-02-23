/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:52:18 by pmendez-          #+#    #+#             */
/*   Updated: 2024/02/04 17:16:06 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_numbers(char *arguments, int j)
{
	int	numero;

	j = 0;
	numero = 0;
	if (arguments[0] == '\0')
		return (0);
	while (arguments[j] != '\0')
	{
		if (arguments[j] == ' ')
			j++;
		if ((ft_isdigit(arguments[j]) == 1))
			numero = 1;
		if (((ft_isdigit(arguments[j]) == 0) && (arguments[j] == '-'))
			|| (((ft_isdigit(arguments[j]) == 0)) && (arguments[j] == '+')))
		{
			if (((arguments[j + 1] != '\0') && (arguments[j + 1] == '-'))
				|| (arguments[j + 1] == '0') || (((arguments[j + 1] != '\0')
						&& (arguments[j + 1] == '+'))))
				return (0);
		}
		else
			return (0);
		j++;
	}
	return (numero);
}

/*void imprimir_array(int *argumentos_enteros, int *tamNum)
{
    int i;

    i = 0;
    while (i < *tamNum)
    {
        ft_printf("----El numero en la posicion %zu es %d ---- \n",
	   	i, argumentos_enteros[i]);
        i++;
    }
}*/


bool	check_arguments(int argc, char **argv)
{
	int	i;
	int	j;
	int	numero;

	i = 1;
	numero = 0;
	j = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			numero = check_numbers(argv[i], j);
			if (numero == 0)
			{
				error();
				return (false);
			}
			i++;
		}
	}
	return (true);
}